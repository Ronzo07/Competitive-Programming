from bisect import bisect_left, bisect_right, bisect

n, q = map(int, input().split())
arr = list(map(int, input().split()))
queries = []
for i in range(q):
    queries.append(int(input()))

cumSum = [0 for i in range(n)]
arr.sort()
cumSum[0] = arr[0]
for i in range(1, n):
    cumSum[i] = cumSum[i - 1] + arr[i]

arr.sort()
for i in range(q):
    idx = bisect_right(cumSum, queries[i])
    print(idx)