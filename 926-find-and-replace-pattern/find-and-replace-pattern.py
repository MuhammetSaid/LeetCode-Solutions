class Solution:
    def findAndReplacePattern(self, words: List[str], pattern: str) -> List[str]:
        def ctrl(x) :
            kontrol = "";gecici = "1";i = 0;j = 0
            while i <len(x):
                if x[i] != gecici[len(gecici)-1]:
                    if x[i] not in gecici:
                        j += 1
                        kontrol += str(j)
                        gecici += x[i]
                    else : kontrol += str(j-(len(gecici)-len(gecici[:gecici.index(x[i])])))
                i += 1
            return kontrol
        ans = [] ; kontrol1 = ctrl(pattern)
        for i in words:
            if ctrl(i) == kontrol1: ans.append(i)
        return ans