import math

m, n = map(int, input().split())
arr = []
for i in range(m, n + 1):
    check = 0
    if i == 1:
        continue
    for j in range(2, int(math.sqrt(i) + 0.5) + 1):
        if i % j == 0:
            check = 1
            break
    if check:
        continue
    arr.append(i)

for i in arr:
    print(i)
