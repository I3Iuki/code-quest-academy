for case in range(int(input())):
    inputt = input().split(",")

    name = inputt[0]
    split_times = inputt[1:]

    h = 0
    m = 0

    for time in split_times:
        split = time.split(":")
        h += int(split[0])
        m += int(split[1])

    if m >= 60:
        h += m // 60
        m = m % 60    

    print(f"{name}={h} {'hour ' if h == 1 else 'hours '}{m if m else ''}{' minutes' if m and m > 1 else ('minute' if m == 1 else '')}")
