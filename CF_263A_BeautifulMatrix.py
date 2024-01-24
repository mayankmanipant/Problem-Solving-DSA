a=[]

for i in range(5):
    row = list(map(int,input().split()))
    a.append(row)

for i in range(len(a)):
    for j in range(len(a[i])):
        if a[i][j]==1:
            row_index=i
            col_index=j
            break

print( abs(row_index-2)+abs(col_index-2) )
