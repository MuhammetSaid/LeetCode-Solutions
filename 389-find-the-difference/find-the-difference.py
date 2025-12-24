class Solution:
    def findTheDifference(self, s: str, t: str) -> str:
        i = 0 ; j = 0
        for n in s:
            i += ord(n)
        for n in t:
            j += ord(n)
        return chr(j-i)