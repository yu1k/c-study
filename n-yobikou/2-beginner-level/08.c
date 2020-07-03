#include <stdio.h>

int main(void){
    FILE *fp;
    char data[10000];
    size_t size;
    size_t i;
    fp = fopen("/home/ubuntu/workspace/c-study/test.bmp", "rb");
    if(fp == NULL){
        puts("test.bmpが開けません。");
        return 1;
    }

    size = fread(data, 1, 5000, fp); //5000バイト分読み込む

    for(int i = 0; i < size; i++){
        printf("%d", data[i]); //10進数として表示
    }
    printf("\n");

    fclose(fp);
    return 0;
}