#include <stdio.h>
#include <string.h>

int main(){
    char ch = 'A';
    char str[] = "きた〜！！"; //文字列の場合はダブルクウォーテーションを使用

    //ch=何を表しているか
    //str=何を表しているか
    //%c = char のこと
    //%s = string のこと
    printf("ch=%c\n", ch);
    printf("str=%s\n", str);
    return 0;
}