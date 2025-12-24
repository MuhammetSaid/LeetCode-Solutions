class Solution:
    def reverseStr(self, s: str, k: int) -> str:
        if len (s) <= k : return s[::-1]
        ans = "";i = 0
        while i < len(s):
            b = s[i:i+k]
            b = b[::-1]
            ans += b
            ans += s[i+k:i+2*k]
            i += 2*k
        return ans