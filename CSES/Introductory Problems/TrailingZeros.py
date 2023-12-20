from math import factorial
n = int(input())
foo = 5
count = 0
while foo < (10 ** 9 + 1):
    count += n // foo
    foo *= 5
print(count)