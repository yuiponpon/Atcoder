#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
    int n;
    cin >> n;

    int max_count = 0;
    int ans = 1;
    for(int i=1;i<n+1;i++) {
        int count = 0;
        int j = i;
        while(1) {
            if(j%2 == 0) {
                j = j/2;
                count++;
            }
            else {
                break;
            }
        }
        if(max_count < count) {
            max_count = count;
            ans = i;
        }
    }
    cout << ans << endl;

    return 0;
}
