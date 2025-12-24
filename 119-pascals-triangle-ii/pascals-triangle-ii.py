class Solution:
    def getRow(self, rowIndex: int) -> List[int]:
        if rowIndex == 0: return [1]
        ans = [1,1]; i = 2
        while i <= rowIndex:
            gecici = [1]
            j = 0
            while j<len(ans)-1:
                gecici.append(ans[j]+ans[j+1])
                j += 1
            gecici.append(1)
            ans=gecici[:]
            i += 1
        return ans