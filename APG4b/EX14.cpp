#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
using namespace std;

int main() {
    int A,B,C;
    cin >> A >> B >> C;
    vector<int> vec = {A,B,C};

    sort(vec.begin(),vec.end());
    cout << vec[2] - vec[0] << endl;
    return 0;
}