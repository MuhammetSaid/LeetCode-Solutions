class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        i = 0;j= 0
        while i < len(s):
            if s[i] in t[j:]:
                j = 0
                t = t[t[j:].index(s[i])+1:]
            else : return False
            i += 1
        return True 