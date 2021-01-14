#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
    int a,b,c;
    cin >> a >> b >> c;
    int count = 0;

    if(a == b && b == c && a == c) {
        if(a%2 == 0 && b%2 == 0 && c%2 == 0) cout << -1 << endl;
        else cout << 0 << endl;
    }
    else {
        while(a%2 == 0 && b%2 == 0 && c%2 == 0) {
            int new_a = b/2 + c/2;
            int new_b = a/2 + c/2;
            int new_c = a/2 + b/2;
            a = new_a;
            b = new_b;
            c = new_c;
            count++;
            // cout << a << b << c << endl;
        }
        cout << count << endl;
    }
    

    return 0;
}