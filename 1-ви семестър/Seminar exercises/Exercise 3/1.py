def Func(listNum: list):
    sumrslt = 0
    for i in listNum:
        sumrslt += i
        if i < sumrslt:
            return False
        else:
            return True
            
Func([1,2,5,7,3])
