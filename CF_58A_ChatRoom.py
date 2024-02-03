s = input()
ans = ''
index = 0

for i in range(len(s)):
    if s[i] == 'h' and index == 0:
        ans += s[i]
        index += 1
    elif s[i] == 'e' and index == 1:
        ans += s[i]
        index += 1
    elif s[i] == 'l' and (index == 2 or index==3):
        ans += s[i]
        index += 1
    elif s[i] == 'o' and index == 4:
        ans += s[i]
        index += 1
        print('YES')
        break

if ans != 'hello':
    print('NO')
