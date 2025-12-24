class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        if len(strs) == 1: return strs[0]
        i = 0; a = "";ans = ""
        while i < len(strs[0]) :
            a += strs[0][i]; j = 1
            while j < len(strs):
                if strs[j].startswith(a) == False: return ans
                j += 1
            ans = a
            i += 1
        if i == len(strs[0]): return a
        return ""