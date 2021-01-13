#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> A(n);
    vector<int> B(n);
    rep(i,n) cin >> A[i];
    rep(i,n) cin >> B[i];

    ll ans = 0;
    rep(i,n) {
        ans += A[i]*B[i];
    }

    if(ans == 0) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}