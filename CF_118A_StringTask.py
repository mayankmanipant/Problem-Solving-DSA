s=input().lower()
ans=''

for i in range(len(s)):
    if s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u' or s[i]=='y':
        continue
    else:
        ans+='.' + s[i]

print(ans)
