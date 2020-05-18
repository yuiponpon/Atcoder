#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    string s;
    cin >> s;
    vector<int> v(s.size()+1);
    if(s[0] == '<') v[0] = 0;
    if(s[s.size()-1] == '>') v[v.size()-1] = 0;
    

    return 0;
}