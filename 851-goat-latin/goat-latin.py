class Solution:
    def toGoatLatin(self, sentence: str) -> str:
        vowels ,sentences ="aeiouAEIOU" , sentence.split()
        for i in range(len(sentences)):
            if sentences[i][0] in vowels: sentences[i] += 'ma'
            else:
                word = list(sentences[i])
                word.append(word.pop(0)+'ma')
                sentences[i] = ''.join(word)
            sentences[i] += 'a'*(i+1)

        return ' '.join(sentences)