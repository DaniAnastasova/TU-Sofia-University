def Func(lstName):
    x = 0
    firstLst = []
    secondLst = []
    for i in lstName:
        x = (len(i)//2)
        firstHalf = i[:x]
        secodHalf= i[x:]
        firstLst.append(firstHalf)
        secondLst.append((secodHalf))
    firstLst.sort()
    secondLst.sort()
    return(firstLst, secondLst)
        

print(Func(["ананас", "ябълка", "круша"]))