n=int(input())
count=0

for i in range(n):
    st=input()
    if "++" in st:
        count+=1
    else:
        count-=1
print(count)
