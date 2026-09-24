for _ in range(int(input())):
    [line, t] = input().split(' ')
    
    if t == "PARENTHESES":
        print(f"({line[0:3]}) {line[3:6]}-{line[6:11]}")
    elif t == "DASHES":
        print(f"{line[0:3]}-{line[3:6]}-{line[6:11]}")
    elif t == "PERIODS": 
        print(f"{line[0:3]}.{line[3:6]}.{line[6:11]}")


