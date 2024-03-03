n=int(input())

p=list(map(int,input().split()))

total=sum(p)
avg=total/n

print(f"{avg:.6f}")
