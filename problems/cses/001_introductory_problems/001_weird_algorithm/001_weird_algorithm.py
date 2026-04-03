# https://cses.fi/problemset/task/1068

n = int(input())

while True:
    print(n, end=" ")

    if n == 1:
        print()

        break

    if n % 2 == 0:
        n //= 2
    else:
        n = n * 3 + 1
