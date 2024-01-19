import math 

n,m,a=map(int,input().split())

flagstones_needed=math.ceil(n/a)*math.ceil(m/a)

print(flagstones_needed)
