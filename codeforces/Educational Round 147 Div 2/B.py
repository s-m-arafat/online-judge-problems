t = int(input())

for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    aa = list(map(int, input().split()))
    n = len(aa)
    i = 0
    j = n - 1
    while i < n and (a[i] == aa[i]):
        i += 1
    while j >= 0 and (a[j] == aa[j]):
        j -= 1
    if i > j:
        print(1, n)
    else:
        while (j >= 0) and (a[j] == aa[j]):
            j -= 1
        while (i < n ) and (a[i] == aa[i]):
            i += 1
        print(i + 1, j + 1)

    # i = 0

    # while(i<n-1):
    #     if aa[i+1]<aa[i] and start==1:
    #         break
    #     if aa[i+1]>=aa[i] and start != 1:
    #         start = 1
    #         ini = i+1
    #     i+=1
    # print(ini, i+1)
