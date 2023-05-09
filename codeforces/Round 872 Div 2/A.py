def ans(s):
    n = len(s)
    if n == 1:
        return -1
    for i in range(n):
        for j in range(i+1, n):
            if s[i] != s[j]:
                return n - 1
    return -1

t = int(input())
for i in range(t):
    s = input().strip()
    print(ans(s))
