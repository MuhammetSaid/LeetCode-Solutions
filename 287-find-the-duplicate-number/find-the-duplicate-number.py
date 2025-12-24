class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        nums = Counter(nums)
        for i in nums:
            if nums[i] >1:
                return i
        return -1