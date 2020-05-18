s = input()
# print(s)
B_index = [i for i,x in enumerate(s) if x == 'B']
# print(B_index)
a = sum(B_index)
# print(a)
b = 0
for i in range(len(s) - 1, len(s) - 1 - s.count('B'), -1):
    b += i
# print(b)
print(b-a)