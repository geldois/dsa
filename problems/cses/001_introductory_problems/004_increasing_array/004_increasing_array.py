# https://cses.fi/problemset/task/1094

n = int(input())
numbers = list(int(number) for number in input().split())
largest_number = numbers[0]
minimum_number_of_moves = 0

for number in numbers:
    if number > largest_number:
        largest_number = number

    if number < largest_number:
        minimum_number_of_moves += largest_number - number

print(minimum_number_of_moves)
