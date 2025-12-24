class Solution:
    def replaceWords(self, dictionary: List[str], sentence: str) -> str:
        sentence = sentence.split() ; i = 0
        while i < len(sentence):
            for j in dictionary:
                if sentence[i].startswith(j):
                    sentence[i] = j
            i += 1
        return ' '.join(sentence)