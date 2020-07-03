#include <iostream>

using namespace std;

int main(){
    char ret;

    cout << "魔王がきた、戦いますか？" << endl;
    cin >> ret;

    if(ret = 'y' || ret == 'Y'){
        puts("あなたはやられてしまいました。");
        return 0;
    }

    cout << "猫が来た、キビ団子をあげますか？" << endl;
    cin >> ret;
    if(ret == 'y' || ret == 'Y'){
        puts("猫が魔王を倒してくれました。");
    }
    else{
        puts("猫と魔王があなたを倒しました。");
    }

    cout << "終了しますか？" << endl;
    cin >> ret;
    if(ret == 'y' || ret == 'Y'){
        return 0;
    }
    else if(ret == 'n' || ret == 'N'){
        puts("nでも終了するね。");
        return 0;
    }
    else{
        puts("YまたはNを入れてね");
    }
    return 0;
}