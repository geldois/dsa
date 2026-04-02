# https://cses.fi/problemset/task/1092

n = int(input())

total = (1 + n) * n // 2

if total % 2:
    print("NO")

    exit()

print("YES")

target = total // 2

first_set = set()

for i in range(1, ((n + 1) // 2) + 1):
    if target >= i + (n + 1 - i):
        first_set.add(i)
        first_set.add(n + 1 - i)

        target -= (i + (n + 1 - i))
    elif target in (i, n + 1 - i):
        first_set.add(target)

        target = 0

        break

print(len(first_set))
print(*first_set)

print(n - len(first_set))

for i in range(1, n + 1):
    if i not in first_set:
        print(i, end=" ")

print()
