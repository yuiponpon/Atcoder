K,N = map(int,input().split())
A = list(map(int,input().split()))

space = []
for i in range(N-1):
    space.append(A[i+1] - A[i])
space.append(K - A[N-1] + A[0])
# print(space)

print(K - max(space))
