import math

t = int(input())

for _ in range(t):
    n = int(input())
    v = list(map(int, input().split()))
    _sum = sum(v)
    if math.isqrt(_sum) * math.isqrt(_sum) == _sum:
        print("YES")
    else:
        print("NO")
