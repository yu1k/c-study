#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

static void do_cat(const char *path);
static void die(const char *s);

int main(int argc, char *argv[]){
    int i;

    // コマンドライン引数が渡されているかチェック。1つも渡されていなかったら、エラーメッセージを出力し、exit()する。
    if(argc < 2){
        fprintf(stderr, "%s: file name notgiven\n", argv[0]);
        exit(1);
    }

    // すべてのコマンドライン引数について順番に繰り返す。プログラム名は除くので、インデックスは1から始まる
    for(i = 1; i < argc; i++){
        do_cat(argv[i]);
    }
    exit(0);
}

#define BUFFER_SIZE 2048

static void do_cat(const char *path){
    int fd;
    unsigned char buf[BUFFER_SIZE];
    int n;

    // catコマンドはファイルに書き込む必要がないので、読み込み専用の引数でファイルを開ける。
    fd = open(path, O_RDONLY);
    if(fd < 0){
        die(path);
    }

    for(;;){
        n = read(fd, buf, sizeof buf);
        if(n < 0){
            die(path);
        }
        if(n == 0){
            break;
        }
        if(write(STDOUT_FILENO, buf, n) < 0){
            die(path);
        }
    }

    // 使い終わったら、ファイルを閉じる
    if(close(fd) < 0){
        die(path);
    }
}

static void die(const char*s){
    perror(s);
    exit(0);
}