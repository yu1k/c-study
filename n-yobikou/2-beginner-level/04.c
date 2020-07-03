#include <stdio.h>

void arrayPrint(int ptr[]); //プロトタイプ宣言

int main(){
    int vc[5] = {10, 20, 30, 40, 50};
    int *ptr = &vc[0];
    //10
    printf("*ptr = %d\n", *ptr);
    //20
    printf("*ptr = %d\n", *(ptr + 1));

    //10
    printf("*ptr = %d\n", ptr[0]);

    //ループ
    for(int i = 0; i < 5; i++){
        //\t = Tabキー
        printf("vc[%d] = %d\tptr[%d] = %d\t*(ptr + %d) = %d\n",
        i, vc[i], i, ptr[i], i, *(ptr + i));
    }
    arrayPrint(ptr);
    return 0;
}

void arrayPrint(int ptr[]){
    int i;
    for(i = 0; i < 5; i++){
        printf("tptr[%d] == %d\t*(ptr + %d) = %d\n",
         i, ptr[i], i, *(ptr + i));
    }
}