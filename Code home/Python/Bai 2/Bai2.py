s, i, j = input().split()
i = int(i)
j = int(j)


def change_string(s, i, j):
    part1 = s[:i].lower()
    part2 = s[i:j].upper()
    part3 = s[j:]
    new_s = part1 + part2 + part3
    return new_s


new_s = change_string(s, i, j)
print(new_s)
