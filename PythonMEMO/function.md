# divmod
商とあまりを同時に取得できる

例
    
    q, mod = divmod(10, 3)
    print(q, mod)
    # 3 1


# f文字列（フォーマット文字列）
<https://note.nkmk.me/python-print-basic/>

文字列中の置換フィールド{}内に変数を直接指定できる

数値の書式を指定して出力（小数点以下の桁数など）

    number = 0.45
    print('{0:.4f} is {0:.2%}'.format(number))
    # 0.4500 is 45.00%

    print(f'{number:.4f} is {number:.2%}')
    # 0.4500 is 45.00%

    
ex.整数h,m,sを二桁で表示させたい（一桁のときは01といったふうに）

    print(f"{h:02}:{m:02}:{s:02}")