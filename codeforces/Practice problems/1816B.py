t = int(input())

for _ in range(t):
    n = int(input())
    grid = [[0 for _ in range(n)] for _ in range(2)]
    max = 2 * n
    grid[0][0] = max
    grid[1][n-1] = max-1
    front, back = 1, max-2
    for i in range(n-1):
        if i % 2 == 0:
            grid[1][i] = front
            grid[0][i+1] = front+1
            front += 2
            
        else:
            grid[1][i] = back-1
            grid[0][i+1] = back
            back -= 2
            
    for i in range(2):
        print(' '.join(map(str, grid[i])))
