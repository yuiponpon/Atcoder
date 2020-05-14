#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
using namespace std;

int main() {
    string N;
    cin >> N;

    int64_t sum = 0;
    for(int tmp=0;tmp < (1<<N.size()-1);tmp++) {
        bitset<10> s(tmp);
        // cout << s << endl;

        vector<int64_t> select;
        string n = {N[0]}; //N[0]はcharなのでstringに変換
        select.push_back(stoi(n));
        int start_index = 1;
        for(int i=0;i<N.size()-1;i++) {

            //s=1のとき（分離）
            if(s.test(i)) {
                n = {N[start_index]};
                select.push_back(stoi(n));
                start_index++;
            }
            //s=0のとき（結合）
            else {
                //selectの末尾の要素に数字を結合
                n = {N[start_index]};
                select[select.size()-1] *= 10;
                select[select.size()-1] += stoi(n);
                start_index++;
            }
        }

        // for(int i=0;i<select.size();i++) {
        //     cout << select[i] << " ";
        // }
        // cout << endl;

        // 配列selectの要素の総和を求める（答え）
        for(int i=0;i<select.size();i++) {
            sum += select[i];
        }

    }
    cout << sum << endl;
    return 0;
}