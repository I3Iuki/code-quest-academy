for _ in range(int(input())):
    nums = [int(x) for x in input().split(" ")]
    print(f"{"Times" if nums[0] > nums[1] else "Herald"} has {max(nums) - min(nums)} more subscribers" if nums[0] != nums[1] else f"Times and Herald have the same number of subscribers")