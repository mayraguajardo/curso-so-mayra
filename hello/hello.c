#include <stdio.h>
#include "./libhello.c"

int main(int argc, char **argv){ /*cualquier cosa fuera del main no va a funcionar */
    int i = 0;
    for(i = 1; i <argc; i++){
        printHello(argv[i]);
    }
    return 0;
}