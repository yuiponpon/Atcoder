#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
using namespace std;

int main() {
    int K,A,B;
    cin >> K >> A >> B;
    if(B/K * K >= A) cout << "OK" << endl;
    else cout << "NG" << endl;

    return 0;
}