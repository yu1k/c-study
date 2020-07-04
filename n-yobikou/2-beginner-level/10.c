#include <stdio.h>

//プリント関数のプロトタイプ宣言
void print(union shape ob);

//種別
struct tag{
    int type;
};

//ライン
struct line{
    int type;
    int x1;
    int y1;
    int x2;
    int y2;
};

//ボックス
struct box{
    int type;
    int top;
    int bottom;
    int left;
    int right;
};

//共用体の宣言
union shape{
    struct tag a;
    struct line b;
    struct box c;
};


int main(void){
    union shape obj;

    //lineの情報
    obj.b.type = 1;
    obj.b.x1 = 10;
    obj.b.y1 = 20;
    obj.b.x2 = 100;
    obj.b.y2 = 200;

    print(obj);

    //boxの情報
    obj.c.type = 2;
    obj.c.top = 20;
    obj.c.bottom = 100;
    obj.c.left = 10;
    obj.c.right = 20;

    print(obj);

    return 0;
}

void print(union shape obj){
    if(obj.a.type == 1){
        printf("Lineの情報\n");
        printf("x1 = %d, y1 = %d, x2 = %d, x2 = %d\n",
         obj.b.x1, obj.b.y1, obj.b.x2, obj.b.x2);
    }
    else{
        printf("Boxの情報\n");
        printf("top = %d, bottom = %d, left = %d, right = %d\n",
         obj.c.top, obj.c.bottom, obj.c.left, obj.c.right);
    }
}

//gccでコンパイルしたらエラーが出たので、g++でコンパイルしてみたら動いた