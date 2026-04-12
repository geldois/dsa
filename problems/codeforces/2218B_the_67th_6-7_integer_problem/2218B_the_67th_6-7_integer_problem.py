# https://codeforces.com/problemset/problem/2218/B

t = int(input())

for _ in range(t):
    total = 0
    max_value = float("-inf")

    for value in map(int, input().split()):
        if value > max_value:
            max_value = value

        total += value

    print(max_value - (total - max_value))
