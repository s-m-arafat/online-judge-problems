t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))

    a.sort()
    f = False
    for l in range(n+1):
        x = 0
        for i in range(n):
            if a[i] > l:
                x += 1
        if x == l:
            print(l)
            f = True

    if f == False: print(-1)
