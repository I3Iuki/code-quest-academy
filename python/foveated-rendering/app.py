import sys
import math
import string

cases = int(sys.stdin.readline().rstrip())
for caseNum in range(cases):
    x, y = map(int, input().split(" "))

    grid = [[10]*20]*20

    print(grid)

    for row in range(20):


        for column in range(20):

            d = max(x - row, y - column)
            grid[row].append(d)

