n, m = map(int, input().split())
a = list(map(int, input().split()))

sum = a[0] - 1
for i in range(m - 1):
    if a[i] > a[i + 1]:
        sum += a[i + 1] + n - a[i]
    else:
        sum += a[i + 1] - a[i]

print(sum)
