m = int(input())
n = int(input())
arr = []
for i in range(m, n+1):
    check = 0
    if i == 1:
        continue
    for j in range(2, i):
        if i % j == 0:
            check = 1
            break
    if check:
        continue
    else:
        arr.append(i)
if len(arr) != 0:
    print(sum(arr))
else:
    print(-1)
if len(arr) != 0:
    print(min(arr))