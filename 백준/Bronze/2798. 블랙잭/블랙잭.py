a, b = list(map(int, input().split()))
num = list(map(int, input().split()))

maximum = 0
for i in range(len(num)):
    num1 = num[i]
    for j in range(1, len(num) - i):
        num2 = num[i + j]
        for k in range(1, len(num) - i - j):
            num3 = num[i + j + k]
            if (maximum < (num1 + num2 + num3)) and ((num1 + num2 + num3) <= b):
                maximum = num1 + num2 + num3
print(maximum)