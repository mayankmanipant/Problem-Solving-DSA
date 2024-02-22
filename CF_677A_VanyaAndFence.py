n,h=map(int,input().split())

a=list(map(int,input().split()))
ans=0

for i in range(n):
    if a[i]>h:
        ans+=2
    else:
        ans+=1

print(ans)
