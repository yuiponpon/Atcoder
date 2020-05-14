//A,Bのペアで重複をなくしたい=>flagを使うことで重複は関係なくなった！
#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
using namespace std;

int main() {
    int N,M;
    cin >> N >> M;
    vector<int> H(N);
    for(int i=0;i<N;i++) cin >> H[i];
    vector<int> A(M),B(M);
    for(int i=0;i<M;i++) {
        cin >> A[i] >> B[i];
    }
    map<int,vector<int>> m;
    //各展望台から１本の道でいける展望台をリストにしたい
   for(int i=0;i<M;i++) {
       m[A[i]].push_back(B[i]);
       m[B[i]].push_back(A[i]);
   }
//    for(auto p:m) {
//        set<int> S;
//        for(auto can_go : p.second) S.insert(can_go);

//    }

//    for(auto p:m) {
//        cout << p.first << " ";
//        for(auto can_go:p.second) {
//            cout << can_go << ",";
//        }
//        cout << endl;
//    }
   int good=0; //いい展望台の数
   for(int i=0;i<N;i++) {
       if(m.count(i+1)) {
           bool flag = false;
            for(auto can_go : m[i+1]) {
                if(H[i] <= H[can_go-1]) {
                    flag = false;
                    break;
                }
                else flag = true;
            }
            if(flag) {
                good++;
                // cout << "展望台" << i+1 << endl;
            }
       }
       else {
           good++;
        //    cout << "no展望台" << i+1 << endl;
       }
   }
   cout << good << endl;

    return 0;
}