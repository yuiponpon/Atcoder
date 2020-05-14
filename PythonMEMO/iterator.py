# イテレータ
# 参考ホームページ　<https://dot-blog.jp/news/python-iterable-iterator/>
a = [1,2,3]
iter_a = iter(a)
print("iter {}".format(iter_a))

print(next(iter_a))
print("###")
for a in iter_a:
    print(a)