#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,M;
    cin >> N;
    cin >> M;
    vector<int> A(M);

    for (int i=0;i<M;i++) {
        cin >> A.at(i);
    }

    int ans = N;
    for (int i=0;i<M;i++) {
        ans -= A.at(i);
    }
    if ( ans >= 0) {
        cout << ans << endl;
    }
    else {
        cout << "-1" << endl;
    }

    return 0;
}