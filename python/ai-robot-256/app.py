for case in range(int(input())):
  x, y, n, cmds = input().split(" ")
  x = int(x)
  y = int(y)
  directions = ["N", "E", "S", "W"]
  facing = directions.index(n)

  for cmd in cmds:
    if cmd == "R":
      facing = facing + 1 if facing != 3 else 0
    if cmd == "L":
      facing = facing - 1 if facing > 0 else 3
    if cmd == "A":
      if directions[facing] == "N":
        y += 1
      elif directions[facing] == "E":
        x += 1
      elif directions[facing] == "S":
        y -= 1
      elif directions[facing] == "W":
        x -= 1

  print(f"{x} {y} {directions[facing]}")