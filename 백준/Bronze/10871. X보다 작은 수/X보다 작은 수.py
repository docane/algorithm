a, b = map(int, input().split())
c = [int(x) for x in input().split()]



for i in range(a):
    if(c[i]<b):
        print(c[i], end=' ')