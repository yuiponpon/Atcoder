#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
using namespace std;

int main() {
    int A,B,C,D;
    cin >> A >> B >> C >> D;

    while(1) {
        if(C-B <= 0) {
            cout << "Yes" << endl;
            break;
        }
        C = C - B;
        if(A - D <= 0) {
            cout << "No" << endl;
            break;
        }
        A = A - D;
    }

    return 0;
}
