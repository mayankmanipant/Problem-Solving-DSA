a = int(input())
b = int(input())
c = int(input())

max_value = max(a + b + c, a * b * c, a * b + c, a + b * c, (a + b) * c, a * (b + c))

print(max_value)
