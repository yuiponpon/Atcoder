#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int k;
    cin >> k;
    string s;
    cin >> s;
    if(s.size() <= k)  cout << s << endl;
    else cout << s.substr(0,k) << "..." << endl;

    return 0;
}