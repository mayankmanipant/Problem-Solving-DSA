n= int(input())
count=0

while n>0:
    p,q=map(int,input().split())
    
    if q-p >1:
        count+=1
    n-=1

print(count)
