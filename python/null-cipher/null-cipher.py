cases = int(input())

for _ in range(cases):
    string = str(input())
    vowels = "aeiou"

    result = []

    skip = False
    for char in string:
        if skip:
            result.append(char)
            skip = False
            continue
        if char in vowels:
            skip = True
    
    print("".join(result))