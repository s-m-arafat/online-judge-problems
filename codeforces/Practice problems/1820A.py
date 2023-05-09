t = int(input())

for _ in range(t):
    s = str(input())
    n = len(s)
    ss = "^" if s[0]=="_" else ""
    for i in range(n):

        if (s[i] == "_") and (ss[-1] == "_"):
            ss += "^"
        ss+=s[i]
    if len(s) == 1:
        ss+="^"
    elif ss[-1] == "_":
        ss+="^"
    print(len(ss) - n)
