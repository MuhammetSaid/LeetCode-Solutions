class Solution:
    def longestWord(self, words: List[str]) -> str:
        words.sort()
        i = len(words)-1 ; j = 0 ; anss = []
        while i >= 0:
            ctrl = 1
            while j<len(words[i])-1:
                b = words[i][:j+1]
                if b not in words:
                    ctrl = 1
                    anss.append(b[:len(b)-1])
                    break
                else :
                    ctrl = 0
                j += 1
            if ctrl == 0 :
                anss.append(words[i])
            i -= 1
            j = 0
        lens = [];mx = 0
        for n in anss:
            if len(n) > mx:
                mx = len(n)
        for n in anss:
            if len(n) == mx: lens.append(n)
        if len(lens) == 0:
            return ""
        return lens[-1]