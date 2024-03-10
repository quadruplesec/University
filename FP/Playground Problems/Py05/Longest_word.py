def longest(s):
    longest = ""
    sentence = s.split()
    for x in sentence:
        if len(x) > len(longest):
            longest = x
    return len(longest)

print(longest('A list with some words'))