# https://cses.fi/problemset/task/1754

t = int(input())

for _ in range(t):
    line = input().split()
    a, b = int(line[0]), int(line[1])

    if (a + b) % 3 != 0 or a > 2 * b or b > 2 * a:
        print("NO")
    else:
        print("YES")
