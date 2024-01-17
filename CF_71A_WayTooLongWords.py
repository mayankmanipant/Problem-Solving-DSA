n=int(input())
while n>0:
    s=input()
    ans=''
    if len(s)>10:
        num=str(len(s)-2)
        ans+=s[0]
        ans+=num
        ans+=s[-1]
    else:
        ans=s
    print(ans)
    n-=1
