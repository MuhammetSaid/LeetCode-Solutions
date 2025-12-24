
class Solution:
    def licenseKeyFormatting(self, s: str, k: int) -> str:
        s = s.replace('-','')
        s = s.upper()
        s = list(s)
        i = len(s)-k
        while i>0:
            s.insert(i,'-')
            i -= k
        return ''.join(s)