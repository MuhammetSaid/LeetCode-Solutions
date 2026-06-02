class Solution:
    def secondHighest(self, s: str) -> int:
        digits = "0123456789";aa = ""
        for i in s:
            if i in digits:
                aa += i
        
        if len(aa) == 0:
            return -1
        aa = aa.replace(max(aa),'')
        if len(aa) == 0:
            return -1
        return int(max(aa))