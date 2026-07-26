for _ in range(int(input())):
    v, x = [float(a) for a in input().split(":")]

    if v == float(0):
        print("SAFE")
    elif (x / v) <= 1:
        print("SWERVE")
    elif (x / v) <= 5:
        print("BRAKE")
    elif (x / v) > 5:
        print("SAFE")