cases = int(input("cases"))
for _ in range(cases):
    nums = [int(num) for num in input("numbers").split(" ")]

    print(f"{nums[0] + nums[1]} {nums[0] * nums[1]}")