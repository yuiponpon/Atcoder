/*未完成＜１０桁以上になるとコアダンプ＞*/

#include <bits/stdc++.h>
#include <string>
#define _GLIBCXX_DEBUG
using namespace std;

int main() {
    string S;
    cin >> S;
    int N = S.size();
    vector<string> vec_S(N);
    for(int i=0;i<N;i++) {
        vec_S[i] = S[i];
    }

    int j = 3;
    int ans = 0;
    int start = 0;
    int num = 0;
    while(start <= N - 4) {
         while(j < N) {
            string num_s="";
            for(int i=start;i<=j;i++) {
                num_s += vec_S[i];
            }
            cout << num_s << endl;
            j++;
            if(num_s.size() < 11) {
                int num = stoi(num_s);  // num_sが10桁以上になると,どうやらstoiが使えない(泣)
            }
            // else {

            // }
            if (num%2019 == 0) {
                    ans += 1;
                }
            
        }
        start++;
        j = start + 3;
    }
    cout << ans << endl;
    return 0;
}