class Solution:
    def minAddToMakeValid(self, s: str) -> int:
        r = 0; l = 0 
        for i in s:
            if i == '(': l += 1
            elif i == ')':
                if l > 0: l -= 1
                else: r += 1
        return r + l

        # while "()" in s :
        #     s = s.replace("()" , '')

        # return len(s)