from sys import stdin
n = int(stdin.readline())

arr = []
for i in range(n):
    arr.append(int(stdin.readline()))
sorted_arr = sorted(arr)
for i in sorted_arr:
    print(i)