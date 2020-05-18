# ゆいぽん★のちょっとした小技集
## ～文字列編～


# charをstringに変換
        char c; 
        string s = {c};

# charをintに
<https://marycore.jp/prog/c-lang/convert-or-cast-char-to-int/>

        char c = '1';
        int i = c - '0';
        printf("%d", i); // 1

# stringをintに
        string s = "100";
        int n = stoi(s); //正しく変換できるのはstring文字列１０桁まで
        cout << n << endl;

# intをstringに
        int number = 100;
        string s = to_string(number);

# 文字列の検索
<https://qiita.com/MasahiroBW/items/3f56b22a079cd3272cd3#%E6%96%87%E5%AD%97%E5%88%97%E3%81%AE%E6%A4%9C%E7%B4%A2>

          s1 = "testtest";
        cout << s1.find("s") << endl; //2(最初の出現位置)

検索文字列が見つからないときは string::npos という値が返る

        if(s1.find("W") == string::npos) cout << "none" << endl;

# スライスs.substr(l)
文字列 S の l 文字目から最後の文字までの部分文字列を返す関数
        string s = "abcde";
        cout << s.substr(2) << endl; // cde

文字列 S の l 文字目から l+r-1 文字目までの部分文字列を返す関数
        string s = "abcde";
        cout << s.substr(1,4) << endl; //出力　bcde

# 文字列を逆順にする
        string s = "abcde";
        reverse(s.begin(),s.end());
        cout << s << endl; //edcba


        

