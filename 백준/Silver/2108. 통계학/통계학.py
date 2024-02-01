import operator
from sys import stdin

count = int(stdin.readline())
arr = []
for i in range(count):
    arr.append(int(stdin.readline()))
arr.sort()

temp = dict()
arr2 = []
temp_max = -99999

print(round(sum(arr) / len(arr)))
print(arr[count // 2])

for i in range(-4000, 4001):
    temp[i] = 0

for i in arr:
    temp[i] += 1

for key in temp.keys():
    if temp_max < temp[key]:
        arr2 = []
        arr2.append(key)
        temp_max = temp[key]
    elif temp_max == temp[key]:
        arr2.append(key)

sdict = sorted(temp.items(), key=operator.itemgetter(1, 0), reverse=True)

temp_max_key, temp_max_val = sdict[0]
for i in sdict:
    a, b = i
    if b == temp_max_val:
        arr2.append(a)
if len(arr2) > 2:
    arr2.sort()
    print(arr2[2])
else:
    print(arr2[0])

print(arr[-1] - arr[0])