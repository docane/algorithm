import math

arr = []
while True:
    a = int(input())
    if a == 0:
        break
    arr.append(a)

prime = []
for i in range(2, 123457 * 2):
    check = 0
    for j in range(2, int(math.sqrt(i) + 0.5) + 1):
        if i % j == 0:
            check = 1
            break
    if check:
        continue
    prime.append(i)

for i in arr:
    temp_min = 0
    temp_max = 0
    for j in range(len(prime)):
        if i < prime[j]:
            temp_min = j
            break
    for j in range(len(prime)):
        if i * 2 > prime[j]:
            temp_max = j
    print(len(prime[temp_min:temp_max]) + 1)