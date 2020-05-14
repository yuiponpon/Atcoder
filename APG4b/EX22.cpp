#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<pair<int,int>> p(N);
    for(int i=0;i<N;i++) {
        int a,b;
        cin >> a >> b;
        p[i] = make_pair(b,a);
    }

    sort(p.begin(),p.end());
    
    for(auto pare:p) {
        cout << pare.second << " " << pare.first << endl;
    }

    return 0;
}