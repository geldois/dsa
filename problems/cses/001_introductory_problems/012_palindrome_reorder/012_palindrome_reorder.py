# https://cses.fi/problemset/task/1755


def solve(string: str) -> str:
    n = len(string)

    chars = {}
    odd_chars = set()

    for char in string:
        chars[char] = chars.get(char, 0) + 1

        if chars[char] % 2:
            odd_chars.add(char)
        else:
            odd_chars.discard(char)

    if (n % 2 == 0 and len(odd_chars) != 0) or (n % 2 and len(odd_chars) != 1):
        return "NO SOLUTION"

    palindrome = []

    for char, count in chars.items():
        for _ in range(count // 2):
            palindrome.append(char)

    palindrome.extend(palindrome[::-1])

    if len(odd_chars) != 0:
        palindrome.insert(n // 2, odd_chars.pop())

    return "".join(palindrome)


print(solve(string=input()))
