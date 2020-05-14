#include <bits/stdc++.h>
using namespace std;

int main()
{
    int K,N;
    cin >> K >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A.at(i);
    }

    vector<int> space(N);
    for (int i=0;i<N-1;i++) {
        space.at(i) = A.at(i+1)-A.at(i);
    }
    space.at(N-1) = K - A.at(N-1) + A.at(0);

    sort(space.begin(),space.end());
    cout << K - space.back() << endl;
    return 0;
}