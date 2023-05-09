t = int(input())
for i in range(t):
    n, k = map(int, input().split())
    m = {}
    ans = {}
    for i in range(k):
        a, b = map(int, input().split())
        m[a] = m.get(a, 0) + 1
        m[b] = m.get(b, 0) + 1
    
    for val in m.values():
        if val == 1:
            continue
        ans[val] = ans.get(val, 0) + 1
    
    x, y = 0, 0
    for key, val in ans.items():
        if val == 1:
            x = key
        else:
            y = key
    
    if y == 0 or x == 0:
        print(x + y, x + y - 1)
    else:
        print(x, y - 1)
