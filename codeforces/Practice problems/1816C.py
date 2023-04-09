t = int(input())

for _ in range(t):
    f = True
    n = int(input())
    a = list(map(int, input().split()))
    for i in range(n-1, 0, -2):
        if a[i-1] > a[i]:
            if i == 1:
                f = False
                print("NO")
                break
            else:
                a[i-2] -= abs(a[i] - a[i-1])
        else:
            if i >= 2:
                a[i-2] += abs(a[i] - a[i-1])
    if f:
        print("YES")
