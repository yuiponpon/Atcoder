# ビット全探索
<https://atcoder.jp/contests/apg4b/tasks/APG4b_ac>

サンプルプログラム

    #include <bits/stdc++.h>
    using namespace std;

    int main() {
    // 3ビットのビット列をすべて列挙する
        for (int tmp = 0; tmp < (1 << 3); tmp++) {
            bitset<3> s(tmp);
            // ビット列を出力
            cout << s << endl;
        }
    }


実行結果

    000
    001
    010
    011
    100
    101
    110
    111

- 特定のビットが１になってるか

    変数.test(調べる位置); 
    
    出力:true or false