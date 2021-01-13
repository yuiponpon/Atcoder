#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    
    vector<int> t(3);
    t[1] = n/60;
    t[2] = n%60;
    t[0] = t[1]/60;
    t[1] = t[1]%60;

    vector<string> st_t;
    for(int time:t) {
        string s;
        if(time < 10) {
            s = "0" + to_string(time);
        }
        else {
            s = to_string(time);
        }
        st_t.push_back(s);
    }
    cout << st_t[0] << ':' << st_t[1] << ':' << st_t[2] << endl;

    return 0;
}