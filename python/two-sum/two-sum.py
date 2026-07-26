class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        seen = {}
        for index, num in enumerate(nums):
          # the difference between the target and the current num that we need to look for
          diff = target - num
          
          # if statement checks if diff was already found
          if diff in seen:
            return [seen[diff], seen[num]]

            # otherwise put it into seen
          else:
            seen[num] = index
            print(seen[diff])

print(Solution().twoSum([2,9,2,11,7], 4))            
print(Solution().twoSum([2,7,9,11], 9))            
print(Solution().twoSum([3,3], 6))            

