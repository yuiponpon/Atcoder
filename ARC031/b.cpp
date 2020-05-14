#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
using namespace std;

//ある陸地マスの座標(x,y)からの陸地マスのつながりを調べる
//ある陸地マスから行くことができる（つながっている）陸地マスのcheckedをtrueにする
void connection(vector<vector<char>> &a,vector<vector<bool>> &checked,int y,int x) {
    if(x < 0 || y < 0 || x > 9 || y > 9) return;
    if(checked[y][x]) return;
    if(a[y][x] == 'x') return;

    checked[y][x] = true;
    //下のマスを調べる
    connection(a,checked,y+1,x);
    //上のマスを調べる
    connection(a,checked,y-1,x);
    //左のマスを調べる
    connection(a,checked,y,x-1);
    //右のマスを調べる
    connection(a,checked,y,x+1);

}

// 全部の陸地がつながっているかを確認する関数
bool all_island_connection(vector<vector<char>> &a) {
    int x=0,y=0;
    //"o"をひとつ探して，そこの座標を(x,y)に代入しとく
    for(int i=0;i<10;i++) {
        for(int j=0;j<10;j++) {
            if(a[i][j] == 'o') {
                y = i;
                x = j;
                break;
            }
        }
    }

    vector<vector<bool>> checked(10,vector<bool>(10,false));
    
    //先程みつけた"o"の座標(x,y)から行ける場所の座標をtrueにする
    connection(a,checked,y,x);

    for(int i=0;i<10;i++) {
        for(int j=0;j<10;j++) {
            if(a[i][j] == 'o') {
                if(checked[i][j]) continue;
                else {
                    return false;
                }
            }
        }
    }
    
    return true;
}

int main() {
    vector<vector<char>> a(10,vector<char>(10));
    for(int i=0;i<10;i++) {
        for(int j=0;j<10;j++) {
            cin >> a[i][j];
        }
    }

    for(int i=0;i<10;i++) {
        for(int j=0;j<10;j++) {
            if(a[i][j] == 'x') {
                a[i][j] = 'o';
                if(all_island_connection(a)) {
                    cout << "YES" << endl;
                    return 0;
                }
                a[i][j] = 'x';
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}