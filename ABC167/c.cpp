#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n,m;
    int64_t x;
    cin >> n >> m >> x;
    vector<int64_t> c(n);
    vector<vector<int64_t>> a(n, vector<int64_t> (m));
    rep(i,n) {
        cin >> c[i];
        rep(j,m) cin >> a[i][j];
    }
    
    const int64_t INF = 100100100100100;
    // int64_t min_c = 100100100100100;
    int64_t min_c = INF;
    for(int tmp=0;tmp < (1 << n) ;tmp++) {
        bitset<12> s(tmp);
        vector<int64_t> vec(m);
        int64_t sum_c = 0;
        rep(i,n){
            if(s.test(i)) {
                rep(j,m) vec[j] += a[i][j];
                sum_c += c[i];
            }
        }
        bool ok = true;
        for(auto v:vec) {
            if(v < x) ok = false;
        }
        if(ok) min_c = min(min_c,sum_c);
    }
    // if(min_c != 100100100100100) cout << min_c << endl;
    if(min_c != INF) cout << min_c << endl;
    else cout << "-1" << endl;

    return 0;
}