#include <stdio.h>

int main(){
    int ax = 10;
    int bx = 20;

    printf("ax = 10, bx = 20\n");
    printf("(ax < bx) = %d\n", ax < bx);
    printf("(ax <= bx) = %d\n", ax <= bx);
    printf("(ax > bx) = %d\n", ax > bx);
    printf("(ax >= bx) = %d\n", ax >= bx);
    printf("(ax == bx) = %d\n", ax == bx);
    printf("(ax != bx) = %d\n", ax != bx);
    printf("(0 & 0) = %d\n", 0 & 0);
    printf("(0 & 1) = %d\n", 0 & 1);
    printf("(1 & 0) = %d\n", 1 & 0);
    printf("(1 & 1) = %d\n", 1 & 1);
    printf("(0 | 0) = %d\n", 0 | 0);
    printf("(0 | 1) = %d\n", 0 | 1);
    printf("(1 | 0) = %d\n", 1 | 0);
    printf("(1 | 1) = %d\n", 1 | 1);
    printf("(0 ^ 0) = %d\n", 0 ^ 0);
    printf("(0 ^ 1) = %d\n", 0 ^ 1);
    printf("(1 ^ 0) = %d\n", 1 ^ 0);
    printf("(1 ^ 1) = %d\n", 1 ^ 1);
    return 0;
}