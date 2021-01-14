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

# intのaとbを連結して新たなint nを作る
    int a,b;
    cin >> a >> b;

    int b_dig = to_string(b).size();
    int n = a*pow(10,b_dig) + b;
    cout << n << endl;
入力 1 21

出力 121

# Nが平方数かどうか判定する関数
<https://algo-logic.info/is-squere/>


    // 平方数かどうかの判定
    bool is_squere(long long N) {
        long long r = (long long)floor(sqrt((long double)N));  // 切り捨てした平方根
        return (r * r) == N;
    }

- sqrtの中身は浮動小数点である必要がある
- 平方根が小数になったときはfloorで切り捨て後，long longの整数型に直しておく