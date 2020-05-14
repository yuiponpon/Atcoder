#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
using namespace std;

int main() {
    int N,K;
    cin >> N >> K;
    vector<int> d(K);
    vector<vector<int>> A(K,vector<int>(N));
    for(int i=0;i<K;i++) {
        cin >> d[i];
        for(int j=0;j<d[i];j++) {
            cin >> A[i][j];
        }
    }

    vector<bool> sweet(N,false);
    for(int i=0;i<K;i++) {
        for(int j=0;j<d[i];j++) {
            sweet[A[i][j]-1] = true;
        }
    }

    int p = 0;
    for(int i=0;i<N;i++) {
        if(sweet[i]) continue;
        else p++;
    }

    cout << p << endl;

    return 0;
}