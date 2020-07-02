#include <iostream>

using namespace std;

int main(){
    char ch = 'A';
    char str[] = "きた〜！！"; //文字列の場合はダブルクウォーテーションを使用
    string buf = "xyz";

    //ch=何を表しているか
    //str=何を表しているか
    //%c = char のこと
    //%s = string のこと
    printf("ch=%c\n", ch);
    printf("str=%s\n", str);
    printf("buf=%s\n", buf.c_str());
    
    return 0;
}