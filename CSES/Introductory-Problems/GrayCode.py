def code(n):
    if n == 1:
        return ["0", "1"]
    arr = []
    one = 1
    for foo in code(n - 1):
        if one == 1:
            arr.append(foo + '0')
            arr.append(foo + '1')
        else: 
            arr.append(foo + '1')
            arr.append(foo + '0')
        one *= -1
    return arr


n = int(input())
print(*code(n))
