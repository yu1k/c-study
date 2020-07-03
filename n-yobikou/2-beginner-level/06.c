#include <stdio.h>

int main(int argc, char *argv[]){
    printf("Hello, World\n");

    //argv[0] = ./a.out
    for(int i = 0; i < argc; i++){
        printf("argv[%d] = %s\n", i, argv[i]);
    }
    return 0;
}