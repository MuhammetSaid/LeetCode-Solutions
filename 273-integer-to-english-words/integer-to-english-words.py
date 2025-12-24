class Solution:
    def numberToWords(self, num: int) -> str:
        if num == 0: return "Zero"
        if num == 10: return "Ten"
        bb = [];c = ""
        ones = ["","One" , "Two" , "Three" , "Four" , "Five" , "Six" , "Seven" , "Eight" , "Nine"]
        tens = ["","Ten" , "Twenty" , "Thirty" , "Forty" , "Fifty" , "Sixty" , "Seventy" , "Eighty" , "Ninety"]
        hundrets1 = ["" ,"" , "Hundred"]
        hundrets = ["" , " Thousand" , " Million" , " Billion"]
        ten = ["Ten","Eleven" , "Twelve" , "Thirteen" , "Fourteen" , "Fifteen" , "Sixteen" , "Seventeen" , "Eighteen" , "Nineteen" ]
        ans = []
        num = str(num)
        for i in range(len(num)-1 , -1 , -1) :
            
            c += num[i]
            if len(c) == 3 :
                bb.append(c[::-1])
                c = ""
        if len(c) != 0: bb.append(c[::-1])

        for i in range(len(bb)-1 , -1 , -1 ):
            kk = []
            if bb[i] != '000' :
                deger = hundrets[i]
            if bb[i] == '11': ans.append(["Eleven " + deger])
            elif bb[i] == '12': ans.append(["Twelve " + deger]) 
            else:
                for j in range(len(bb[i])-1 , -1 , -1):
                    gecici = "" ; deger2 = " ";aaa = tens;bbb=ones;ccc = tens
                    if len (bb[i]) == 3 : 
                        if bb[i][0] == "0" : deger2 = ""
                        elif bb[i][1] != '0' :deger2 = " derdnuH "
                        else : deger2 = "derdnuH "
                        aaa = ones
                        bbb = tens
                        ccc = ones
                    
                    elif len(bb[i]) == 1 :
                        aaa = ones
                    elif len(bb[i]) == 2 and bb[i][0] == '1':
                        gecici += ten[int(bb[i][1])] + ' ' + deger
                        kk.append(gecici)
                        break
                    if j == 0 : gecici +=  deger2 + aaa[int(bb[i][0])][::-1]
                    elif j == 1:
                        if bb[i][1] == '1' and len(bb[i]) == 3:
                            gecici = "";kk = []
                            gecici += ten[int(bb[i][2])]
                            kk.append(gecici)
                            continue
                        gecici += " " + bbb[int(bb[i][1])][::-1]
                    elif j == 2 : 
                        gecici += " " + ccc[int(bb[i][2])][::-1]
                    kk.append(gecici[::-1])
                    if j == 0 : kk.append(deger)
                    
                    
                ans.append(kk)
            deger = ""
                
        ans2 = []
        for i in range(len(ans)) : 
            gecici2 = ans[i][::-1]
            gecici2+=ans[i][-1]
            gecici2 = gecici2[1:]
            gecici2 = ''.join(gecici2)
            gecici2 = gecici2.strip()
            ans2.append(gecici2)
            ans2.append(' ')
        ans = ''.join(ans2).strip()
        ans = list(ans)
        for i in range(len(ans)-1):
            if ans[i] == ' ' and ans[i+1] == ' ': ans[i] = ''
        return ''.join(ans)