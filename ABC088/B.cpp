#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    for(int i=0;i<N;i++) {
        cin >> a[i];
    }
    sort(a.begin(),a.end());

    int ans=0;
    for(int i=0;i<N;i++) {
        if(i%2 == 0) {
            ans += a[i];
        }
        else {
            ans -= a[i];
        }
    }
    cout << abs(ans) << endl;
    return 0;
}