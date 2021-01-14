#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;


bool is_square(int n) {
    int x = floor(sqrt((double)n));
    return x*x == n;
}

int main() {
    int a,b;
    cin >> a >> b;

    int b_dig = to_string(b).size();
    int n = a*pow(10,b_dig) + b;
    // cout << n << endl;

    if(is_square(n)) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}