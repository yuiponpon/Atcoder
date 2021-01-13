#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> x(n);
    rep(i,n) cin >> x[i];

    int ans = 1001001001;
    for(int p=1;p<=100;p++) {
        int now = 0;
        rep(i,n) now += pow(x[i]-p,2);
        ans = min(ans,now);
    }
    cout << ans << endl;

    return 0;
}