#include <stdio.h>

int main(){

    int array[5];

    char ch = 'A';
    char str[5];

    char buf[] = "ABCDEFGHIJK";


    str[0] = 'A'; //要素番号0の箱
    str[1] = 'B'; //要素番号1の箱
    str[2] = 'C'; //要素番号2の箱
    str[3] = 'D'; //要素番号3の箱
    //文字列の終わりはNull止め
    str[4] = '\0'; //要素番号4の箱

    for(int i = 0; i < 5; i++){
        printf("array[%d] = %c\n", i , str[i]);
    }

    printf("str = %s\n", str);
    printf("buf = %s\n", buf);
    return 0;
}