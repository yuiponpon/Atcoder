#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
    int x,y;
    cin >> x >> y;
    int min_n = min(x,y);
    int max_n = max(x,y);
    if(min_n+3 > max_n) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}