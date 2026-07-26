import sys 
import math 
import string 

cases = int(sys.stdin.readline().rstrip()) 
outputs = []

for i in range(cases): 
  starting_num = int(sys.stdin.readline().rstrip())
  num = starting_num
  iterations = 1

  if 2 <= starting_num <= 1000000:
    while num != 1:
      if num % 2 == 0:
        num = num // 2
        iterations += 1
      else:
        num = (num * 3) + 1
        iterations += 1

  outputs.append(f"{starting_num}:{iterations}")

for i in outputs:
  print(i)
