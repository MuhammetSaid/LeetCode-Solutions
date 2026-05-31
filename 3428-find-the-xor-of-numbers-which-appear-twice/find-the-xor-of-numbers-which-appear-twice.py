class Solution:
    def duplicateNumbersXOR(self, nums: List[int]) -> int:
        
        tekrarlanan = [];ans = 0
        a = Counter(nums)
        for i in a.keys():
            if a[i] == 2:
                tekrarlanan.append(i)
        for i in range(len(tekrarlanan)):
            ans = ans^tekrarlanan[i]
        return ans