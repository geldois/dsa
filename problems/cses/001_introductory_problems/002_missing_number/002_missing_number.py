# https://cses.fi/problemset/task/1083

n = int(input())
numbers = input().split()
missing_number = ((1 + n) * n // 2) - sum(int(number) for number in numbers)
print(missing_number)
