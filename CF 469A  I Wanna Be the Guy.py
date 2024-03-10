n=int(input())

p, *lsp = map(int, input().split())
q, *lsq = map(int, input().split())

st=set(lsp+lsq)

if len(st)==n:
    print("I become the guy.")
else:
    print("Oh, my keyboard!")
