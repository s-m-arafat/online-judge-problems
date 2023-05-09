import math

def primeFactors(n, m):
    if n % 2 == 0:
        if m >= 2:
            print("NO")
            return
        else:
            print("YES")
            return

    for i in range(3, int(math.sqrt(n))+1):

        if n % i == 0:
            if m >= i:
                print("NO")
                return
            else:
                print("YES")
                return

    print("YES")
    return

def solve():
    n, m = map(int, input().split())
    if m >= n and n != 1:
        print("NO")
        return
    primeFactors(n, m)

t = int(input())
for i in range(t):
    solve()
