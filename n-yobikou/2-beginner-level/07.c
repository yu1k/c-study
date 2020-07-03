#include <stdio.h>


int main(void){
    FILE *fp;

    //wは書き込み用として開くということ
    //+はファイルがない時は新規で作るということ
    fp = fopen("/home/ubuntu/workspace/c-study/test.txt", "w+");
    if(fp == NULL){
        puts("test.txtが開けません。");
        return 1;
    }
    // 10 + 20 = 30です と書き込む
    fpintf(fp, "%d %c %d = %d%s\n", 10, "+", 20, 10+ 20, "です");
    return 0;
}