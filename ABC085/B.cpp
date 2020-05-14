/*ABC085_B*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i=0;i<N;i++) {
        cin >> A.at(i);
    }

    set<int> set_A;
    for(int i=0;i<N;i++) {
        set_A.insert(A.at(i));
    }

    cout << set_A.size() << endl;
    return 0;
}