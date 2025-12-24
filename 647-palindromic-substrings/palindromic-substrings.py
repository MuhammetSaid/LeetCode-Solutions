class Solution:
    def countSubstrings(self, s: str) -> int:
        i = 0 ; a = 0; sayac = 0
        while i < len(s):
            a += 1; j = 0
            while j < len(s)-a+1:
                b = s[j:j+a]
                if s[j:j+a] == b[::-1] : sayac += 1
                j += 1
            i += 1
        return sayac