n=int(input())
count=0
while n>0:
    p, v, t = map(int, input().split())
    if (p and v==1) or (v and t==1) or(p and t==1) or (p and v and t==1):
        count+=1
    n-=1
print(count)
