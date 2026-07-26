import math

for _ in range(int(input())):
    asteroids = [list(map(int, input().split(" "))) for i in range(int(input()))]
    asteroids = sorted(asteroids, key=lambda x: math.sqrt((x[0] ** 2)+(x[1] ** 2)))
    for c in asteroids:
        print(f"{c[0]} {c[1]}")