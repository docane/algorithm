t = int(input())

arr = []
for i in range(t):
    h, w, n = map(int, input().split())
    arr.append([h, w, n])

for i in range(t):
    temp = arr[i][2] // arr[i][0] + 1 if arr[i][2] % arr[i][0] != 0 else arr[i][2] // arr[i][0]
    temp2 = arr[i][2] % arr[i][0] if arr[i][2] % arr[i][0] != 0 else arr[i][0]
    temp = str(temp) if temp > 9 else '0' + str(temp)
    print(str(temp2)+temp)
