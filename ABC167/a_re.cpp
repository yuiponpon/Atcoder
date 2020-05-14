#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    string s,t;
    cin >> s >> t;
    t.pop_back();
    if(s == t) cout << "Yes" << endl;
    else cout << "No" << endl; 

    return 0;
}