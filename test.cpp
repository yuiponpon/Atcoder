#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> digit; //数字の桁を入れる配列
    while(n) {
        digit.push_back(n % 10);
        n = n / 10;
    }
    reverse(digit.begin(),digit.end());
    for(auto d: digit) cout << d << ' ';
    cout << endl;
    return 0;
}