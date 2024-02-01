n = input()
arr = []
for i in n:
    arr.append(i)
arr.sort(reverse=True)
result = ''
for c in arr:
    result += c
print(result)