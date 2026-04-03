# https://cses.fi/problemset/task/1072

k = int(input())

for i in range(1, k + 1):
    number_of_ways = (i**2 * (i**2 - 1) // 2) - (4 * (i - 1) * (i - 2))
    print(number_of_ways)
