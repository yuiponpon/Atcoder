#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    int ans=0;
    for(int a=1;a<n;a++) {
        ans += (n-1) / a;
    }
    cout << ans << endl;

    return 0;
}