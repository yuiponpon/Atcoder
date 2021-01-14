# 配列の中のある要素の数をカウント
<https://kaworu.jpn.org/cpp/std::vector_%E7%89%B9%E5%AE%9A%E3%81%AE%E8%A6%81%E7%B4%A0%E3%82%92%E3%82%AB%E3%82%A6%E3%83%B3%E3%83%88%E3%81%99%E3%82%8B>
- 3の出てくる回数をカウント

        vector<int> v = {3,3,4,1};
        int n = count(v.begin(),v.end(),3);

# 配列の要素のminとmaxを求める
        vector<int> vec = {1,2,3};
        cout << *min_element(vec.begin(),vec.end()) << endl; //1
        cout << *max_element(vec.begin(),vec.end()) << endl; //3


# 配列内の特定の要素を検索し，そのインデックスを求める
        vector<int> v { 5, 4, 3, 2, 1 };

        auto it = find(v.begin(), v.end(), 4);
        auto index = distance(v.begin(), it);// 出力1