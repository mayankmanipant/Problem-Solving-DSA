def min_time_to_form_line(n, heights):
    max_height = max(heights)
    min_height = min(heights)

    max_index = heights.index(max_height)
    min_index = n - 1 - heights[::-1].index(min_height)

    if max_index > min_index:
        return max_index + (n - 1 - min_index) - 1
    else:
        return max_index + (n - 1 - min_index)


n=int(input())
heights=list(map(int,input().split()))
print(min_time_to_form_line(n,heights))
