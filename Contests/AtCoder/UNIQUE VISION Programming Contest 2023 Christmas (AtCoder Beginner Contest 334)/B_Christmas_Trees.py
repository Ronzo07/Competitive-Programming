a, m, l, r = map(int, input().split())

low = (l - a + m - 1) // m
high = (r - a) // m

print(high - low + 1)