#divmodで商と余りを同時に取得
n = int(input())
m,s = divmod(n,60)
h,m = divmod(m,60)
print(f"{h:02}:{m:02}:{s:02}")