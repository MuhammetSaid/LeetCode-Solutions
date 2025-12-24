class Solution:
    def maximumProduct(self, nums: List[int]) -> int:
        nums = sorted(nums)
        ans = nums[-1]*nums[-2]*nums[-3]
        if nums[0]*nums[1]*nums[-1] > ans: ans = nums[0]*nums[1]*nums[-1]
        return ans