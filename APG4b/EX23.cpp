//map最強～！わー！
#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i=0;i<N;i++) cin >> A[i];

    map<int,int> count;
    for(int i=0;i<N;i++) {
        count[A[i]] += 1;
    }
    int max_count = 0;
    int num = 0;
    for(auto p:count) {
        // cout << p.first << " " << p.second << endl;
        if(p.second > max_count) {
            max_count = p.second;
            num = p.first;
        }
    }
    cout << num << " " << max_count << endl;
    
    return 0;
}