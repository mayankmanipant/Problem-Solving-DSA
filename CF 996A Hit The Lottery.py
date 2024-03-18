n = int(input())

count = 0

denominations = [100, 20, 10, 5, 1]

for denomination in denominations:
    count += n // denomination
    n %= denomination

print(count)
