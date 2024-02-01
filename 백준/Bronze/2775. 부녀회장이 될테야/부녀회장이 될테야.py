t = int(input())

arr = []
for i in range(t):
    k = int(input())
    n = int(input())
    arr.append([k, n])

arr2 = [[i for i in range(15)]]
for i in range(14):
    arr3 = [sum(arr2[i][:j + 1]) for j in range(15)]
    arr2.append(arr3)

for i in range(t):
    print(arr2[arr[i][0]][arr[i][1]])