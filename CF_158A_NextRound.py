n,k=map(int,input().split())

a=list(map(int,input().split()))

count=0
for i in range(n):
    if a[i]>=a[k-1] and a[i]>=1:
        count+=1

print(count)
