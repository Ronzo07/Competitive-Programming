def CreatingString(word, n):
    if n == 1: return [word[0]]
    else:
        before = CreatingString(word, n - 1)
        arr = []
        for w in before:
            for i in range(len(w) + 1):
                arr.append(w[:i] + word[n - 1] + w [i:])
        return sorted(arr)

word = input()
dict = {}
foo = CreatingString(sorted(word), len(word))
ans = []
for e in foo:
    if (e not in dict):
        ans.append(e)
        dict[e] = 0

print(len(ans)) # It is (n! / a!b!c!) lenth / repated letters
for bar in ans:
    print(bar)