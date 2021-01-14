#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int r,d;
    const double pi = acos(-1);
    cin >> r >> d;
    double ans = 2*pow(pi,2)*pow(r,2)*d;
    printf("%.10f\n",ans);
    return 0;
}