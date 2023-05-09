import sys

def solve():
    n = int(input())
    b = list(map(int, input().split()))

    sum_val = b[0] + b[1] + b[2]
    mx1, mx2, mx3 = b[0], b[1], b[2]
    ans = sum_val

    for i in range(3, n):
        sum_val += b[i]
        if b[i] >= mx1:
            mx3 = mx2
            mx2 = mx1
            mx1 = b[i]
        elif b[i] >= mx2:
            mx3 = mx2
            mx2 = b[i]
        elif b[i] >= mx3:
            mx3 = b[i]
        cur_ans = sum_val - (i - 2) * mx1 - (i - 3) * mx2 - (i - 4) * mx3
        ans = max(ans, cur_ans)

    print(ans)

t = int(input())
for _ in range(t):
    solve()
