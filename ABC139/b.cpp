#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int a,b,beg=1,count=0;
    cin >> a >> b;
    
    if(b==1) {
        cout << 0 << endl;
    }
    else {
        while(beg < b){
            beg += a-1;
            // cout << beg << endl;
            count++;
        }
        cout << count << endl;   
    }
    return 0;
}