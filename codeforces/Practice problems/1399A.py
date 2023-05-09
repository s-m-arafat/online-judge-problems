t = int(input())

for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    a.sort()
    
    f = 0
    for i in range(n-1):
        if (abs(a[i]-a[i+1]) > 1):
            print("NO")
            f = 1
            break
    if f==0:
        print("YES")