#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
    int n,k;
    cin >> n >> k;
    vector<int> X(n);
    rep(i,n) cin >> X[i];

    int ans = 0;
    for(int x:X) {
        ans += min(x,abs(x-k));
    }
    ans = ans * 2;

    cout << ans << endl;

    return 0;
}