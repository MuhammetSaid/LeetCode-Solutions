class Solution:
    def customSortString(self, order: str, s: str) -> str:
        ans = ""
        for i in order :
            if i in s : 
                a = s.count(i)
                ans += a*i
        for i in s:
            if i not in order: ans += i
        return ans