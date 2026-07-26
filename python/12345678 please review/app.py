import re

for _ in range(int(input())):
    stuff = input().split(' "')

    coords = list(map(int, re.sub(r"[^0-9,]", '', stuff[0]).split(",")))

    one = sorted(stuff[1].replace('"', "").split()[int(coords[0]) - 1])
    two = sorted(stuff[2].replace('"', "").split()[int(coords[1]) - 1])

    print("Verified" if one == two else "Intercepted")

import re

for _ in range(int(input())):
    line = input()

    coords = list(map(int, re.findall(r'\d+', line[:line.index('"')])))

    phrases = re.findall(r'"([^"]*)"', line)

    one = sorted(phrases[0].split()[coords[0] - 1])
    two = sorted(phrases[1].split()[coords[1] - 1])

    print("Verified" if one == two else "Intercepted")