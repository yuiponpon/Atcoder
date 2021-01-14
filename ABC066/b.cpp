#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
    string s;
    cin >> s;
    int n = s.size()/2-1;
    rep(i,n) {
        s.pop_back();
        s.pop_back();
        if(s.substr(0,s.size()/2) == s.substr(s.size()/2,s.size())) {
            cout << s.size() << endl;
            break;
        }
    }
    return 0;
}