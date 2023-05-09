
import math

mod = int(1e9) + 7

def bp(a, b):
    if b == 0:
        return 1
    r = bp(a, b // 2)
    if b % 2:
        return (r * r * a) % mod
    else:
        return (r * r) % mod

for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))

    ans = 0
    for i in range(n//2):
        x = abs(a[i] - a[n-i-1])
        if x == 0:
            continue
        if i == 0:
            ans = x
        else:
            ans = math.gcd(x, ans)

    print(ans)
