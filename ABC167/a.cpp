#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    string s,t;
    cin >> s >> t;

    bool ok = true;
    rep(i,s.size()) {
        if(s[i] != t[i]) ok = false;
    }
    if(ok) {
        if(t.size() == s.size() + 1) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    else cout << "No" << endl;

    return 0;
}