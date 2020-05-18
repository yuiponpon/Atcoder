//一問TLE（泣）
#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    string s;
    cin >> s;
    
    // cout << count(s.begin(),s.end(),'B') << endl;
    long long c_B = count(s.begin(),s.end(),'B');
    long long a = 0;
    rep(i,s.size()) {
        if(s[i] == 'B') a += i;
    }
    long long b = 0;
    for(int i = s.size()-1;i >= s.size() - c_B;i--) {
        b += i;
    }
    cout << b - a << endl;
    return 0;
}