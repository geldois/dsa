# https://cses.fi/problemset/task/1070

n = int(input())

odd = n % 2 != 0
start = 1 if odd else 2

if n == 1:
    print(n)
elif n in (2, 3):
    print("NO SOLUTION")
else:
    for i in range(start, n + 1, 2):
        print(i, end=" ")

    start = 2 if odd else 1

    for i in range(start, n, 2):
        print(i, end=" ")
