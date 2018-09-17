import math

m, n, a = map(int, input().split())

M = math.ceil(m/a)
N = math.ceil(n/a)

print(M*N)