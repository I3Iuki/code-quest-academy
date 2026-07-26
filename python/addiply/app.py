cases = int(input())

for _ in range(cases):
    str = input()

    split = str.split()

    reversed_array = reversed(split)

    joined_string ="".join(reversed_array)


    print(str, reversed_array)