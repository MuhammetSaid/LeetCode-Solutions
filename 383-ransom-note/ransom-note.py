class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        ransomNote = Counter(ransomNote);magazine = Counter(magazine)
        for i in ransomNote:
            if i not in magazine or ransomNote[i]>magazine[i]:
                return False
        return True