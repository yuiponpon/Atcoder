#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> data(5);
  for (int i = 0; i < 5; i++) {
    cin >> data.at(i);
  }

  // dataの中で隣り合う等しい要素が存在するなら"YES"を出力し、そうでなければ"NO"を出力する
  // ここにプログラムを追記
  int x = data[0];
  for(int i=1;i<5;i++) {
      if(x == data[i]) {
          cout << "YES" << endl;
          break;
      }
      else if(i<4) {
          x = data[i];
      }
      else {
          cout << "NO" << endl;
      }
  }
}
