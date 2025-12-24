class Solution:
    def reverseVowels(self, s: str) -> str:
        def isVowel(c: str) -> bool:
            vowel = "aeiouAEIOU"
            return c in vowel
        listIndex = []; listVowels = []
        for i in range(len(s)):
            if isVowel(s[i]):
                listVowels.append(s[i])
                listIndex.append(i)
        listVowels.reverse()
        s = list(s)
        for i in range(len(listIndex)):
            s[listIndex[i]] = listVowels[i]
        
        return ''.join(s)