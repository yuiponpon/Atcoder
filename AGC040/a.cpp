#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
    string s;
    cin >> s;
    vector<int> v(s.size()+1,0);
    rep(i,s.size()) {
        if(s[i] == '<') v[i+1] = max(v[i+1],v[i]+1);
    }
    for(int i=s.size()-1;i>=0;i--) {
        if(s[i] == '>') v[i] = max(v[i],v[i+1]+1);
    }
    ll sum = 0;
    for(auto v1:v) sum += v1;
    cout << sum << endl;

    return 0;
}