#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    rep(i,N) cin >> a[i];

    vector<bool> light(N,false);
    int count=0;
    bool ok = false;
    int st=0;
    while(!ok) {
        if(!light[a[st]-1]) {
            light[a[st]-1] = true;
            count++;
            if(light[1]) {
                ok = true;
                break;
            }
            st = a[st]-1;
        }
        else ok = true;
    }

    if(light[1]) cout << count << endl;
    else cout << "-1" << endl;

    return 0;
}