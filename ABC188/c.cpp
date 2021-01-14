#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    int x = pow(2,n);
    vector<int> A(x);
    rep(i,x) cin >> A[i];
    vector<int> result(x,1);

    int now = x;
    while(now > 2){
        vector<int> fight;
        rep(i,x) {
            if(result[i]==1) fight.push_back(A[i]);
        }
        // cout << "now=" << now << endl;
        // for(auto f:fight) cout << f << ' '; 
        // cout << endl;
        int start = 0;
        rep(i,now/2) {
            if(fight[start] < fight[start+1]) {
                auto it = find(A.begin(), A.end(), fight[start]);
                auto index = distance(A.begin(), it);
                result[index] = 0;
            }
            else {
                auto it = find(A.begin(), A.end(), fight[start+1]);
                auto index = distance(A.begin(), it);
                result[index] = 0;
            }
            start+=2;
        }
        int sum = 0;
        for(auto r:result) sum += r;
        now = sum;

        // for(auto r : result) cout << r << ' ';
        // cout << endl;
    }
    // for(auto r : result) cout << r << ' ';
    // cout << endl;

    vector<int> index;
    rep(i,x) {
        if(result[i] == 1) index.push_back(i);
    }
    if(A[index[0]] < A[index[1]]) cout << index[0] + 1 << endl;
    else cout << index[1] + 1 << endl;

    return 0;
}