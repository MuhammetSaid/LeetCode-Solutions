class Solution:
    def convertToBase7(self, num: int) -> str:
        x = num; ans = "";ctrl = 0
        if num < 0:
            ctrl = 1
            num *= -1
        while num > 1:
            ans += str(num%7)
            num = num // 7
        if num != 0 : ans += str(num)
        if ctrl == 1:
            ans += '-'
        if x == 0 : return "0"
        return ans[::-1] 