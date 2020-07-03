#include <stdio.h>

int main(){
    int ax;
    int array[5];

    ax = 0;
    array[0] = 10; //array[0] < 数字のことを添字
    array[1] = 20;
    array[2] = 30;
    array[3] = 40;
    array[4] = 50;

    for(int i = 0; i < 5; i++){
        printf("array[%d] = %d\n", i , array[i]);
    }
    return 0;
}