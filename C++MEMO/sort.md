<STLの関数>
<https://atcoder.jp/contests/apg4b/tasks/APG4b_o>
# how to sort vector
    sort(vector.begin(),vector.end());

# 配列変数vecの要素の並びを逆にする
    reverse(vec.begin(),vec.end())

# a,bで小さい方を返す
    min(a,b)

# a,bで大きい方を返す
    max(a,b)

# 変数aと変数bの値を交換する
    swap(a,b)

# a番目からb番目までソート
    sort(vec.begin() + a,vec.begin() + b) 

*b番目は含まない

例：2~4番目をソート

    vector<int> vec = {9,8,7,6,5,4,3,2,1};
    sort(vec.begin() + 2, vec.begin() + 5);
    for(auto v:vec) cout << v << ' '; //9 8 5 6 7 4 3 2 1
    cout << endl;

<集合>

# 集合set_Aを定義
    set<int> set_A;
使い方の例；
配列Aをset_Aにinsertしていけば，重複している数を取り除ける

    for(int i=0;i<N;i++) {
        set_A.insert(A.at(i));
    }
- 参考コード；ABC085/B.cpp

