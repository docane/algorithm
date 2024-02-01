from sys import stdin

n = int(stdin.readline())
arr = []

for i in range(10001):
    arr.append(0)

for i in range(n):
    temp = int(stdin.readline())
    arr[temp] += 1

for i, v in enumerate(arr):
    if v == 0:
        continue
    for j in range(v):
        print(i)
