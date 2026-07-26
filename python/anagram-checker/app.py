for _ in range(int(input())):
    og = input()
    split = og.split("|")
    if split[0] == split[1]:
        print(f"{og} = NOT AN ANAGRAM")
        continue
    first = sorted(split[0])
    second = sorted(split[1])
    print(f"{og} {'= ANAGRAM' if first == second else '= NOT AN ANAGRAM'}")