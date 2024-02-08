n=int(input())
total_forces=[0,0,0]

for i in range(n):
    force=list(map(int,input().split()))
    total_forces[0]+=force[0]
    total_forces[1]+=force[1]
    total_forces[2]+=force[2]

if(total_forces==[0,0,0]):
    print("YES")
else:
    print("NO")
