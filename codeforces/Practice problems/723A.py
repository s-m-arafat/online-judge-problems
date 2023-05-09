
p = list(map(int, input().split()))
p.sort()
print(abs(p[0]-p[1])+abs(p[2]-p[1]))