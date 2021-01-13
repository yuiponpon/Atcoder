#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
    long long n,m;
    cin >> n >> m;
    
    double lnm = log10(m);
    double lnx = (double)n - lnm;
    double lna = lnx - lnm;
    double lnb = lnx - lna -lnm;
    ll ans = pow(10,lnb);

    cout << ans << endl;
    return 0;
}