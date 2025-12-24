class Solution:
    def complexNumberMultiply(self, num1: str, num2: str) -> str:
        r1, cmpl1 = num1.split('+'); r1 = int(r1); cmpl1 = int(cmpl1[:-1])
        r2, cmpl2 = num2.split('+'); r2 = int(r2); cmpl2 = int(cmpl2[:-1])
        return f"{r1*r2 - cmpl2*cmpl1}+{r1*cmpl2 + r2*cmpl1}i"