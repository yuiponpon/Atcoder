#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N;
    cin >> N;
    int x = N % 10;

    if(x == 2 ||x == 4 ||x == 5 ||x == 7 ||x == 9) cout << "hon" << endl;
    else if(x == 0 ||x == 1 ||x == 6 ||x == 8) cout << "pon" << endl;
    else if(x == 3) cout << "bon" << endl;

    return 0;
}