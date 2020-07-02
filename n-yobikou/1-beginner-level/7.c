#include <stdio.h>

int main(){
    char ch = 0x41;
    
    printf("ch = %c\n", ch); //文字としての出力
    printf("ch = %d\n", ch); //10進数としての出力
    printf("ch = %x\n", ch); //16進数としての出力
    printf("ch = %o\n", ch); // 8進数としての出力
    return 0;
}