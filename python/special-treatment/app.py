for case in range(int(input())):
    chars = list(input())

    temp = []
    for char in chars:
        if char.isalnum() or char == " ":
            temp.append(char)

    print("".join(temp))