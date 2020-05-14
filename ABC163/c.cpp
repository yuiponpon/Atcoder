#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N-1,0);
    for (int i = 0; i < N-1; i++) cin >> A.at(i);
    vector<int> ans(N);
    for (int i=0;i<N-1;i++) ++ans.at(A.at(i)-1);
    for (int i=0;i<N;i++) cout << ans.at(i) << endl;
    
    return 0;
}