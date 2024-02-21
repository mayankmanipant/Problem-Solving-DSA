def tram_capacity(n, stops):
    current_capacity = 0
    max_capacity = 0

    for stop in stops:
        exits, enters = stop
        current_capacity = current_capacity - exits + enters
        max_capacity = max(max_capacity, current_capacity)

    return max_capacity

# Input
n = int(input())
stops = [tuple(map(int, input().split())) for _ in range(n)]

# Output
result = tram_capacity(n, stops)
print(result)
