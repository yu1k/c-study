#include <iostream>

using namespace std;

int main(){
    //順次処理
    cout << "遊びから閃きは生まれるか！！" << endl;
    cout << "遊びから閃きは生まれるか！！" << endl;
    cout << "遊びから閃きは生まれるか！！" << endl;
    cout << "遊びから閃きは生まれるか！！" << endl;
    cout << "遊びから閃きは生まれるか！！" << endl;


    for(int i = 0; i < 3; i++){
        cout << "真剣な遊びが将来につながる！！" << endl;
    }

    int i = 0;
    while(i < 5){
        cout << "自分を信じてチャレンジ！！" << endl;
        //iが2でループを抜ける
        if(i == 2){
            break;
        }
        i++;
    }

    i = 0;
    do{
        cout << "自由の扉は自分で開こう！！" << endl;
        i++;
    }while(i < 3);

    return 0;
}