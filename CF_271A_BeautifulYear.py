def distinct(year):
    return len(set(str(year)))==4

def find_year(current_year):
    while True:
        current_year+=1
        if(distinct(current_year)):
            return current_year
        
y=int(input().strip())

result=find_year(y)
print(result)
