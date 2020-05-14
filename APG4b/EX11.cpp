#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A;
  string op;
  cin >> N >> A;

  // ここにプログラムを追記
  for(int i=0;i<N;i++){
      int number;
      cin >> op >> number;
      if(op == "+") {
          A += number;
          cout << i+1 << ":" << A << endl;
      }
      else if(op == "-") {
          A -= number;
          cout << i+1 << ":" << A << endl;
      }
      else if(op == "*") {
          A *= number;
          cout << i+1 << ":" << A << endl;
      }
      else if(op == "/") {
          if (number == 0) {
              cout << "error" << endl;
              break;
          }
          else {
               A /= number;
               cout << i+1 << ":" << A << endl;
          }
      }
  }
}
