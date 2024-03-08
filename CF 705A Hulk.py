n = int(input())

feelings = "I hate"

for i in range(2, n + 1):
    feelings += " that "
    if i % 2 == 0:
        feelings += "I love"
    else:
        feelings += "I hate"

feelings += " it"

print(feelings)
