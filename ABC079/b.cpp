#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
using namespace std;

// int64_t Ryuka(int n) {
//     if(n==0) return 2;
//     if(n==1) return 1;

//     int64_t L = Ryuka(n-1) + Ryuka(n-2);
//     return L;
// }

int main() {
    int N;
    cin >> N;
    // printf("%ld\n",Ryuka(N));
    vector<int64_t> L(N+1);
    L[0] = 2;
    L[1] = 1;
    for(int i=2;i<=N;i++) L[i] = L[i-1] + L[i-2];
    // printf("%ld\n",L[3]);
    printf("%ld\n",L[N]); 
    return 0;
}