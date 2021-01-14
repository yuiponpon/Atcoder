#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n,a,b;
    cin >> n >> a >> b;
    string s;
    cin >> s;

    int pass=0,k_no=1;

    for(char c:s){
        if(c == 'a') {
            if(pass < a+b) {
                cout << "Yes" << endl;
                pass++;
            }
            else {
                cout << "No" << endl;
            }
        }
        else if(c == 'b') {
            if(pass < a+b && k_no <= b) {
                cout << "Yes" << endl;
                pass++;
                k_no++;
            }
            else {
                cout << "No" << endl;
            }
        }
        else {
            cout << "No" << endl;
        }
    }

    return 0;
}