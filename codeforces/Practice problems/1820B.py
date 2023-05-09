t = int(input())

for _ in range(t):
    s = str(input())
    n = len(s)
    ss = s+s
    ones = ss.split('0')
    max_length = max([len(run) for run in ones])
    
    if n == (max_length/2): print(n*n)
    elif max_length == 1 or s == "1": print(1)
    elif max_length == 0: print(0)
    else: print(int(((max_length/2)+1))*int((max_length//2)))






