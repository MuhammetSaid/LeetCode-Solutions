class Solution:
    def reverseOnlyLetters(self, s: str) -> str:
        s = list(s); x = s[:]; i = 0; j = len(s)-1
        a = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"
        while j>=0 and i<len(s): 
            if s[i] in a and s[j] in a:
                x[i] = s[j]
                i+=1
                j-=1
            elif s[i] not in a and s[j] in a: i += 1
            elif s[i] in a and s[j] not in a: j-=1
            else:
                i+=1
                j-=1
        return ''.join(x)