t = int(input())
for _ in range(t):
    n, m = map(int, input().split())
    a = list(map(int, input().split()))
    a.sort()
    x = a[n * m - 1]
    p = a[0]
    q = a[1]
    y = a[n * m - 2]

    count = (n - 1) * (x - q) + (n) * (m - 1) * (x - p)
    ans = (n - 1) * (y - p) + (m - 1) * n * (x - p)

    n, m = m, n
    
    count2 = (n - 1) * (x - q)+  (n) * (m - 1) * (x - p)
    ans2 = (n - 1) * (y - p) + (m - 1) * n * (x - p)

    print(max(max(ans, ans2), max(count, count2)))