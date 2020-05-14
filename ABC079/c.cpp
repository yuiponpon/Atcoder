#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
using namespace std;

int main() {
    string S;
    cin >> S;
    vector<int> n(4);
    for(int i=0;i<4;i++) n[i] = S[i] - '0';
    // for(int i=0;i<4;i++) cout << S[i] << endl;

    for(int tmp=0;tmp<(1<<3);tmp++) {
        bitset<3> s(tmp);
        int ans = n[0];
        // cout << s << endl;
        for(int i=0;i<3;i++) {
            if(s.test(i)) ans += n[i+1];
            else ans -= n[i+1];
        }
        // cout << ans << endl;
        if(ans == 7) {
            cout << n[0];
            for(int i=0;i<3;i++) {
                if(s.test(i)) cout << "+" << n[i+1];
                else cout << "-" << n[i+1];
            }
            cout << "=7" << endl;
            break;
        }
    }

    return 0;
}