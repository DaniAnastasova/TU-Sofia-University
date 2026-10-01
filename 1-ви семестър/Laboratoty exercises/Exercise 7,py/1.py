# 1 - Да напишем програма, която е дефинирана функция която връща като резултат второто по големина число в списък подаден като аргумент на функцията.     
def Func(lst: list):          
    s1 = set(lst)
    max1 = max(s1)
    lst = []
    for i in s1:
        if i < max1:
            lst.append(i)
        
    return max(lst)
            
print(Func([1, 2, 3, 4, 9, 9]))