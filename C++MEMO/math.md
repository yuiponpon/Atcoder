# sunukeさんのおすすめのpiの書き方

    const double PI = acos(-1);

# 小数の長い式の計算
最初の宣言のdoubleだけでなく式の中でもdoubleを書く！じゃないと、正確に計算できない
    
    参考コードABC168/c.cpp

# cos,sinの中はラジアン
イメージ： cos(割合＊2PI)

# 小数点以下10桁表示

    printf("%.10f\n",x); // xはdouble