def Func(lst: list):
    m = 0
    x = 0
    y = 0
    if (len(lst) % 2 != 0):
        m = len(lst)//2
        return lst[m]
    else:
        element1 = len(lst)//2 - 1   
        x = lst[element1]
        element2 = len(lst)//2       
        y = lst[element2]
        averageSum = (x + y) / 2     
        return averageSum  

listNums1 = [2,3,4,5,6]
listNums1.sort()                   
print(Func(listNums1))  


            
        