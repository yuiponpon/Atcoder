#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> x;
    x.push_back(n/1.08);
    x.push_back(n/1.08+1);
    // for(int x1:x) cout << x1 << endl;
    for(int x1:x){
        int ans = x1*1.08;
        if(ans == n) {
            cout << x1 << endl;
            return 0;
        }
    }
    cout << ":(" << endl;
    return 0;
}