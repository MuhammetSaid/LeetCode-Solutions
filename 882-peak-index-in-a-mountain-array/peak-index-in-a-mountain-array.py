class Solution:
    def peakIndexInMountainArray(self, arr: List[int]) -> int:
        n = len(arr);i=1;max = arr[0]
        while arr[i] > max:
            if arr[i] > max: max = arr[i]
            i+=1
        return i-1