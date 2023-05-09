from queue import Queue

def solve():
    n, m = map(int, input().split())

    if n == m:
        print("YES")
        return

    if n % 3 != 0 or m > n:
        print("NO")
        return

    q = Queue()
    q.put(n)
    vis = set()
    vis.add(n)

    while not q.empty():
        x = q.get()

        if x == m:
            print("YES")
            return

        if x % 3 == 0:
            y = x // 3
            if y == m or 2 * y == m:
                print("YES")
                return
            if y not in vis:
                q.put(y)
                vis.add(y)
            if 2 * y not in vis:
                q.put(2 * y)
                vis.add(2 * y)

    print("NO")

t = int(input())
for _ in range(t):
    solve()
