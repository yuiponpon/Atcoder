# 数字ｎの各位の値を求める
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
入力 4567
出力 4 5 6 7