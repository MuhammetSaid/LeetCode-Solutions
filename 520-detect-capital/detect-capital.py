class Solution:
    def detectCapitalUse(self, word: str) -> bool:
        if word == word.lower() or word == word.upper() or word == word.capitalize():
            return True
        return False