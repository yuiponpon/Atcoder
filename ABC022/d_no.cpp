#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
using namespace std;

int main() {
    int N,M;
    cin >> N >> M;
    vector<int> x,y;
    for(int i=0;i<M;i++) {
        int X,Y;
        cin >> X >> Y;
        x.push_back(X);
        y.push_back(Y);
    }
    map<int,vector<int>> group;
    for(int i=0;i<M;i++) {
        group[x[i]].push_back(y[i]);
        group[y[i]].push_back(x[i]);
    }
    int max_group=0;
    for(int i=0;i<M;i++) {
        int size = group[i].size();
        max_group = max(max_group,size);
    }
    cout << max_group + 1 << endl;
    return 0;
}