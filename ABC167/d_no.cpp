#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i=0;i<n;i++) {
        int a1;
        cin >> a1;
        a1--;
        a[i] = a1;
    }
    vector<int> vec;
    for(int i=0;i<n;i++) {
        int num = a[i];
        vec.push_back(a[num]);
    }
    for(auto v:vec) cout << v << ' ';
    cout << endl;

    return 0;
}