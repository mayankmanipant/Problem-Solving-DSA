n = int(input())
columns = list(map(int, input().split()))
 
for i in range(n):
    for j in range(i + 1, n):
        if columns[j] < columns[i]:
            columns[i], columns[j] = columns[j], columns[i]
 
print(*columns)
