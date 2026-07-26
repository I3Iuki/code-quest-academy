import math

cases = int(input())

for _ in range(cases):
    x, y = map(int, input().split(" "))

    good = [str(input()) for i in range(x)]
    bad = [str(input()) for i in range(y)]

    temp = []

    for system in good:
        if system not in bad:
            temp.append(system)

    temp.sort()

    for system in temp:
        print(system)