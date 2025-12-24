class Solution:
    def isHappy(self, n: int) -> bool:
        anss = []
        a = ""
        while a != '1' :
            a = str(n)
            gecici = []
            for i in a :
                gecici.append(int(i)**2)
            n = sum(gecici)
            if n in anss: return False
            elif n == 1: return True
            else : anss.append(n)
        return False
