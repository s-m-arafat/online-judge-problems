import math

t = int(input())

for i in range(t):
    s = input().strip()
    count = 1
    n = len(s)
    q_count = s.count('?')
    for i in range(1, n):
        if s[i] == '?':
            count *= 10
    
    # if s.count('?') == 0 and s[0] != '0':
    #     print(n) 
    if s[0] == '0':
        print(0)     
    elif(s[0]=='?'):
        print(9*(count))
    else:
        print(count)
