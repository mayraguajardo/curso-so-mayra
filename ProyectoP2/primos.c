#include "stdio.h"
#include "stdlib.h"
#include "unistd.h"

int primo;
char fin[10];

int main(int argc, char **argv){
    char primochar [10];
    sprintf(fin, "-1");
    read(0,primochar, sizeof(primochar));
    primo = atoi(primochar);
    if (primo == -1){
        write(1,fin, sizeof(fin));
        return 0;
    }
    fprintf(stderr, "%s \n", primochar);
    while(1){
        char numeroschar [10];
        read(0,numeroschar, sizeof(numeroschar));

        int numero = atoi(numeroschar);
        if (numero == -1){
            write(1, fin, sizeof(fin));
            return 0;
        }else{

            if(numero % primo != 0 ){
                char numerossig [10];
                sprintf(numerossig,"%d", numero);
                write(1, numerossig, sizeof(numerossig));
            }
        }

    }
    return 0;

}