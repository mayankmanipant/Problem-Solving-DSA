def lucky(num):
    luc_no = [4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777]
    for l in luc_no:
        if num % l==0:
            return True
    return False

n=int(input().strip()) 

if lucky(n):
    print("YES")
else:
    print("NO")
