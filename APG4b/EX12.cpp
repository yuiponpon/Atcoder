#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int sum = 1;

  for(int i=1;i<S.size();i++) {
    if(S.at(i) == '+') {
      sum++;
    }
    else if(S.at(i) == '-') {
      sum--;
    }
  }
  cout << sum << endl;
}
