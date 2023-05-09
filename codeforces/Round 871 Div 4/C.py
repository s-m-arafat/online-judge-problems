def sol():
    n = int(input())
    a, b, c, d = [], [], [], []
    
    for i in range(n):
        x, s = input().split()
        
        if s == "00":
            a.append(int(x))
        elif s == "10":
            b.append(int(x))
        elif s == "01":
            c.append(int(x))
        else:
            d.append(int(x))
    
    m, f = float('inf'), 0
    
    if d:
        x = min(d)
        f = 1
        m = x
        
    if b and c:
        x = min(c)
        y = min(b)
        
        if x+y < m:
            m = x+y
        f = 1
        
    if f == 1:
        print(m)
    else:
        print(-1)
    return

t = int(input())

while t > 0:
    sol()
    t -= 1
