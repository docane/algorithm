from sys import stdin

t = int(stdin.readline())
temp = []
for i in range(t):
    temp.append(int(input()))
arr = [True] * 10001
arr[0] = False
arr[1] = True
prime = []
for i in range(2, 10001):
    if arr[i]:
        prime.append(i)
    for j in range(i+i, 10001, i):
        if not arr[j]:
            continue
        arr[j] = False

for n in temp:
    temp = n // 2
    a = temp
    b = temp
    while True:
        if (a in prime) & (b in prime):
            break
        a -= 1
        b += 1
    print(str(a) + ' ' + str(b))
