#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <signal.h>

int infinito = 1;

void  signalHandler(int signalNumber){
    printf("Signal received %d \n", signalNumber );
    infinito = 0;
}
int main(){
    int pid;
    signal(10,signalHandler);
    pid = fork();
    if(pid == 0){
        printf("Soy el hijo \n");
        while(infinito){
            printf("Dentro del infinito\n");
            sleep(1);
        }
        printf("Ya salí\n");
    } else {
        sleep(5);
        printf ("Soy el padre \n");
        kill(pid, 10);
        for(;;);

    }
}