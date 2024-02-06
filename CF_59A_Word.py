s=input()
lower,upper=0,0

for i in range(len(s)):
    if s[i]>='a' and s[i]<='z':
        lower+=1
    else:
        upper+=1

if(lower>=upper):
    print(s.lower())
else:
    print(s.upper())
