#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
    vector<vector<int>> A(3,vector<int>(3));
    rep(i,3){
        rep(j,3) cin >> A[i][j];
    }
    int n;
    cin >> n;
    vector<int> B(n);
    rep(i,n) cin >> B[i];

    for(int b:B) {
        rep(i,3) {
            rep(j,3) {
                if(A[i][j] == b) A[i][j] = 0;
            }
        }
    }

    bool flag = false;

    // check the horizontal line
    rep(i,3) {
        int sum = 0;
        rep(j,3) sum += A[i][j];
        if(sum == 0) {
            flag = true;
            break;
        }
    }

    // check the vertical line
    if(!flag) {
        rep(i,3) {
            int sum = 0;
            rep(j,3) sum += A[j][i];
            if(sum == 0) {
                flag = true;
                break;
            }
        }
    }

    // check the diagonal
    if(!flag) {
        if(A[1][1] == 0) {
            if(A[0][0] == 0 && A[2][2] == 0) flag = true;
            else if(A[0][2] == 0 && A[2][0] == 0) flag = true;
        }
    }

    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}