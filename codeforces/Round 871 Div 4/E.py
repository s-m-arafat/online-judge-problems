def find(parent, x):
    if x == parent[x]:
        return x
    parent[x] = find(parent, parent[x])
    return parent[x]

def unite(parent, size, x, y):
    x = find(parent, x)
    y = find(parent, y)
    if x != y:
        if size[x] < size[y]:
            x, y = y, x
        parent[y] = x
        size[x] += size[y]

def solve():
    n, m = map(int, input().split())
    a = [list(map(int, input().split())) for _ in range(n)]
    dir = [(0, 1), (0, -1), (1, 0), (-1, 0)]
    parent = list(range(n * m))
    size = [1] * (n * m)
    for i in range(n):
        for j in range(m):
            if a[i][j] == 0:
                continue
            for d in dir:
                x, y = i + d[0], j + d[1]
                if 0 <= x < n and 0 <= y < m and a[x][y] != 0:
                    unite(parent, size, i * m + j, x * m + y)
    mp = {}
    for i in range(n):
        for j in range(m):
            if a[i][j] == 0:
                continue
            mp[find(parent, i * m + j)] = mp.get(find(parent, i * m + j), 0) + a[i][j]
    if mp:
        ans = max(mp.values())
    else:
        ans = 0
    print(ans)

t = int(input())
for _ in range(t):
    solve()
