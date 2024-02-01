arr = []
for i in range(int(input())):
    arr.append(0)
arr[:] = map(int, input().split())

result = len(arr)
for i in arr:
    if i == 1:
        result -= 1
        continue
    for j in range(2, i):
        if i % j == 0:
            result -= 1
            break
print(result)