#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
using namespace std;

int main() {
    int D,G;
    cin >> D >> G;
    vector<int> p(D),c(D);
    for(int i=0;i<D;i++) cin >> p[i] >> c[i];

    int min_n = 1000;//最小問題数
    //どのレベルを全問正解するか全探索
    for(int tmp=0;tmp<(1 << D);tmp++) {
        bitset<10> s(tmp);
        // cout << s << endl;
        int bonus=0; //問題を全問正解したときの得点
        for(int i=0;i<D;i++) {
            if(s.test(i)) bonus += c[i]+(100*(i+1))*p[i];
            // cout << s << endl;
        }
        // cout << "bonus:" << bonus << endl;

        if(bonus >= G) {
            int n = 0;//問題数
            for(int i=0;i<D;i++) {
                if(s.test(i)) n += p[i];
                // cout << n << endl;
            }
            min_n = min(min_n, n);
            // cout << min_n << endl;
        }
        else {
            int n=0;
            int add=0; //追加で解いた問題数
            bool flag=false;
            for(int i=D-1;i>=0;i--) {
                if(!s.test(i)) {
                    for(int j=0;j<p[i]-1;j++) {
                        add++;
                        bonus += (100*(i+1)) * (j+1);
                        if(bonus >= G) {
                            flag = true;
                            break;
                        }
                        bonus -= (100*(i+1)) * (j+1);
                    }
                }
                if(flag) break;
                else continue;
            }
            if(bonus >= G) {
                // cout << "add:" << add << endl;
                // cout << "bonus:" << bonus << endl;
                for(int i=0;i<D;i++) {
                    if(s.test(i)) n += p[i];
                }
                // cout << s << endl;
                min_n = min(min_n, n+add);
            } 
        }
    }
    cout << min_n << endl;
    return 0;
}