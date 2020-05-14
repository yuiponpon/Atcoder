#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> t(N);
    for(int i=0;i<N;i++) cin >> t[i];

    int min_time = 200;
    for(int tmp=0;tmp<(1<< 4);tmp++) {
        bitset<4> s(tmp);
        // cout << s << endl;
        int timeA=0,timeB=0;
        for(int i=0;i<4;i++) {
            if(s.test(i)) timeA += t[i];
            else timeB += t[i];
        }
        min_time = min(min_time,max(timeA,timeB));
    }

    cout << min_time << endl;
    
    return 0;
}