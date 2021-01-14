#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
    ll h,w;
    cin >> h >> w;
    ll ans = 0;

    if(h == 1 || w == 1) ans = 1;
    else if((h*w)%2 != 0) ans = h*w/2 + 1;
    else ans = h*w/2;
    cout << ans << endl;

    return 0;
}