t = int(input())
for _ in range(t):
    n, m = map(int, input().split())
    a = list(map(int, input().split()))
    l = a.count(-2)
    r = a.count(-1)
    p = n - l - r
    s = set(x for x in a if x > 0)
    v = [-1] + sorted(s) + [-2]
    
    ans = 0
    for i in range(len(v)):
        x = v[i]
        if i == 0:
            ans = max(ans, min(l + len(v) - 2, m))
        elif i == len(v) - 1:
            ans = max(ans, min(r + len(v) - 2, m))
        else:
            ans = max(ans, 1 + min(r + i - 1, x - 1) + min(l + len(v) - i - 2, m - x))
    
    print(ans)
    
