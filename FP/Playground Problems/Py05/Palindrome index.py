def palindrome_index(s):
    if s == s[::-1]:
        return -1
    for x in range(len(s)):
        temp_str = s[0:x] + s[x+1:len(s)]
        if temp_str == temp_str[::-1]:
            return x
    return -1

print(palindrome_index('aaab'))