#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<string> S(N);
    for(int i=0;i<N;i++) {
        cin >> S[i];
    }
    set<string> set_S;
    for(int i=0;i<N;i++) {
        set_S.insert(S[i]);
    }
    cout << set_S.size() << endl;
    return 0;
}