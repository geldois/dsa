# https://cses.fi/problemset/task/1071

t = int(input())
numbers = []
i = 0

while i < t:
    line = input().split()
    y, x = int(line[0]), int(line[1])
    layer = y if y > x else x
    is_even_layer = layer % 2 == 0
    max_number_on_layer = layer**2
    offset = layer - y + (x - 1) if is_even_layer else layer - x + (y - 1)
    number = max_number_on_layer - offset
    numbers.append(number)
    i += 1

for number in numbers:
    print(number)
