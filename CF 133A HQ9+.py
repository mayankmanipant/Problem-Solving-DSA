s=input()
flag=0

ls=['H','Q','9']

for i in ls:
    if i in s:
        flag=1

if flag==0:
    print("NO")
else:
    print("YES")
