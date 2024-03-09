t = int(input())

while t > 0:
    n, m = map(int, input().split())
    if n % m == 0:
        print(0)
    else:
        next_multiple = ((n + m - 1) // m) * m
        print(next_multiple - n)
    t -= 1
