#include <stdio.h>

//型を定義した記述。この型をもとに変数宣言を行う
struct test{
    int x;    /* メンバーx */
    double y; /* メンバーy */
};

int main(void){
    struct test s;

    s.x = 10;   //sのなかのxに10を代入
    s.y = 3.14; //sのなかのyに3.14を代入

    printf("s.x = %d\n", s.x);
    printf("s.y = %.2f\n", s.y);

    return 0;
}