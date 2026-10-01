class Random:
    def __init__(self, numbers):
       self.numbers = numbers

obj1 = Random([1, 2, 3])
obj2 = Random([4, 5])

def Func(obj1, obj2):
    obj1_lst = list(obj1.numbers.copy())
    obj2_lst = list(obj2.numbers.copy())
    len1 = len(obj1_lst)
    len2 = len(obj2_lst)
    maxLen = max(len1, len2)
    if len1 < maxLen:
        obj1_lst.append(0)
    
    if len2 < maxLen:
        obj2_lst.append(0)
    
    for i in range(maxLen):
        lst_result = []
        result = obj1_lst[i] + obj2_lst[i]
        lst_result.append(result)    
    
    obj3 = Random(lst_result)
    return obj3
       