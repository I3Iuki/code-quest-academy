import re

for _ in range(int(input())):
    line = input()

    coords = list(map(int, re.findall(r'\d+', line[:line.index('"')])))

    phrases = re.findall(r'"([^"]*)"', line)

    one = sorted(phrases[0].split()[coords[0] - 1])
    two = sorted(phrases[1].split()[coords[1] - 1])

    print("Verified" if one == two else "Intercepted")