for case in range(int(input())):
    x, y = [int(x) for x in input().split(" ")]

    ships = [input() for x in range(int(x))]
    

    for _ in range(y):
        ships.remove(input())

    for ship in ships:
        print(ship)

