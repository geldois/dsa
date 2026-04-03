# https://cses.fi/problemset/task/1069

line = input()
last_char = None
actual_substring_length = 0
max_substring_length = 0

for char in line:
    if not last_char:
        last_char = char

    if last_char == char:
        actual_substring_length += 1

        if actual_substring_length > max_substring_length:
            max_substring_length = actual_substring_length

    if last_char != char:
        actual_substring_length = 1

    last_char = char

print(max_substring_length)
