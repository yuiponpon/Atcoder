# 配列Aのサイズ
    A.size()

# 関数定義 <https://atcoder.jp/contests/apg4b/tasks/APG4b_p>
    返り値の型 関数名(引数1の型 引数1の名前, 引数2の型 引数2の名前, ...) {
      処理
    }
例；STLのmin関数と同じ機能を持つ関数をmy_minを定義

    #include <bits/stdc++.h>
    using namespace std;

    // 関数定義
    int my_min(int x, int y) {

      if (x < y) {
        return x;
      }
      else {
        return y;
      }

    }

    int main() {
      int answer = my_min(10, 5);
      cout << answer << endl; // 5
    }


# 返り値のない関数
返り値の型にvoidを指定

例；

    #include <bits/stdc++.h>
    using namespace std;

    // 返り値が無いのでvoidを指定
    void hello(string text) {
      cout << "Hello, " << text << endl;
      return;
    }

    int main() {
      hello("Tom");
      hello("C++");
    }


# 文字列の型
string
# 文字の型
char
# ブール
bool

例：宣言するとき

    bool answer = falase;

# 範囲for文<https://atcoder.jp/contests/apg4b/tasks/APG4b_r>
    for (配列の要素の型 変数名 : 配列変数) {
      // 各要素に対する処理
    }

例：

    #include <bits/stdc++.h>
    using namespace std;

    int main() {
      vector<int> a = {1, 3, 2, 5};
      for (int x : a) {
        cout << x << endl;
      }
    }

出力

1
3
2
5


## string型の変数に対して、1文字ずつ処理したい場合
例：

    #include <bits/stdc++.h>
    using namespace std;

    int main() {
      string str = "hello";
      for (char c : str) {
        if (c == 'l') {
          c = 'L';
        }
        cout << c;
      }
      cout << endl;
    }

出力：
heLLo


# 多次元配列<https://atcoder.jp/contests/apg4b/tasks/APG4b_t>
宣言の例： int型の2次元配列(3×4要素の)の宣言

    vector<vector<int>> data(3, vector<int>(4));



test
  


