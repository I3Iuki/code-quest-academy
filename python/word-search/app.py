import sys
import math
import string

for _ in range(int(sys.stdin.readline().rstrip())):
    N, W, H = [int(a) for a in input().split(" ")]
    grid = [[a for a in input().strip()] for yuh in range(H)]
    targets = {input():[] for a in range(N)}

    for word in targets:
        print(word)
        for i, char in enumerate(word):
            for y in grid:
                if char in y:
                    if i == 0:
                        targets[word].append()

            

