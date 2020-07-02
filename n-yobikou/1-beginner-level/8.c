#include <stdio.h>

int main(){
    int ax = 10;
    double fx = 3.14;

    printf("fx = %.2f\n", fx); //3.14
    fx = ax; //暗黙の型変換
    printf("fx = %.2f\n", fx); //10.00
    fx = 3.14;
    printf("fx = %.2f\n", fx);
    //  ↓ キャスト
    ax = (int)fx; //明示的な型変換
    printf("ax = %d\n", ax);

    return 0;
}