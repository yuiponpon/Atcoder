#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const double PI = acos(-1);


int main() {
    int a,b,h,m;
    cin >> a >> b >> h >> m;
    
    double tm = double(m)/60 * 2 * PI; 
    double th = double(60*h + m)/720 * 2 * PI;

    double t = abs(tm - th);
    double x = sqrt(a*a + b*b - 2*a*b*cos(t));
    printf("%.10f\n",x);

    return 0;
}