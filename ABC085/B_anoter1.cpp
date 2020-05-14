#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> d(N);

    for(int i=0;i<N;i++) {
        cin >> d[i];
    }

    sort(d.begin(),d.end());
    
    int j = 0;
    int ans = 0;
    for(int i=0;i<N;i++) {
        if(d[i] > j) {
            ans += 1;
            j = d[i];
        }
    }
    cout << ans << endl;
    return 0;
}