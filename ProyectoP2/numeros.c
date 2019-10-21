#include "stdio.h"
#include "unistd.h"

int main (int argc, char **argv){
    char num [10];
    char fin [10];
    sprintf(fin, "-1");

    for (int i = 2; i < 101; i++){
        sprintf(num, "%d", i);
        write(1, num, sizeof(num));
    }

    write(1, fin, sizeof(fin));
    return 0;


}