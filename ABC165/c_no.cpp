//未解決　入力例２がだめ
#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
using namespace std;

int main() {
    int N,M,Q;
    cin >> N >> M >> Q;
    vector<int> a(Q),b(Q),c(Q);
    vector<int64_t> d(Q);
    for(int i=0;i<Q;i++) {
        cin >> a[i] >> b[i] >> c[i] >> d[i];
    }

    // vector<int> A(N,0);
    // int d_sum=0;
    int64_t max_d_sum=0;
    for(int j=1;j<=M;j++) {
        vector<int64_t> A(N,-1);
        int64_t d_sum=0;
        for(int i=0;i<Q;i++) {
            if(A[a[i]-1] == -1) A[a[i]-1] = j;
            if(A[b[i]-1] == -1) {
                A[b[i]-1] = c[i] + A[a[i]-1];
                d_sum += d[i];
                // if(A[a[i]-1] <= A[b[i]-1]) d_sum += d[i];
                // else A[b[i]-1] = -1;
            }
            else {
                    if(A[b[i]-1] == c[i] + A[a[i]-1]) d_sum += d[i];
                }
        }
        max_d_sum = max(max_d_sum,d_sum);
    }
    // cout << max_d_sum << endl;
    printf("%ld\n",max_d_sum);
    return 0;
}