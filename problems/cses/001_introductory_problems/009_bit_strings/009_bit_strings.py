# https://cses.fi/problemset/task/1617

n = int(input())

base = 2
mod = 1000000007
result = 1

while n > 0:
    if n % 2:
        result = (result * base) % mod

    base = (base * base) % mod
    n //= 2

print(result)
