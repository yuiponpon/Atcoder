#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int64_t a,b,c,k;
    cin >> a >> b >> c >> k;

    int64_t sum = 0;
    if(a >= k) sum += k;
    else {
        if(a < k) {
            sum += a;
            k = k-a;
        }
        if(k != 0) {
            k = k-b;
            if(k != 0) sum += (-1)*k;
        }
    }

    cout << sum << endl;

    return 0;
}