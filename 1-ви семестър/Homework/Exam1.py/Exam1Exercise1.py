from asyncio.windows_events import NULL
from random import random
while True:
    try:
      n = int(input("Въведете число"))
      if 15 > n > 35:
         raise ValueError("Невалидно число")
      else:
         break
    except ValueError as error:
      print(error)
    
lst = []
num = 0
for i in range(n):
    num = random.randint(30,300)
    lst.append(num)

countElements = 0
lst1 = []
lst2 = []
oddNumslst = []
countOddNumsInLst  = 0
sum = 0
minNumInAlst2 = 0
multOddMaxAndMinNum = 0

if len(lst) != 0:
    for x in lst:
        if ((x // 100)% 10) % 4 == 0:
            countElements +=1
    print(countElements)
    
    for x in lst:
        if x % 6 == 4:
            lst1.append(x)
    
    if len(lst1) != 0:
        print(lst1.index(min(lst1)))
    
    for i in lst:
        if (i // 100) % 10 == 0 or None or NULL:
            if i % 2 == 0 or i % 3 == 0:
                lst2.append(i)
    
    if len(lst2) != 0:
        for x in lst2:
            if lst2.index(x) % 2 != 0:
                oddNumslst += x
    
    if len(oddNumslst) != 0:
        result = 0
        for i in oddNumslst:
            sum +=i 
            countOddNumsInLst += 1
        result = sum / countOddNumsInLst
        print(result)
    
    lst2.sort()
    for i in lst2:
        if i % 2 == 0:
            lst2.remove(i)
    
    multOddMaxAndMinNum = max(oddNumslst) * min(oddNumslst)
    lst2.append(multOddMaxAndMinNum)
    
    if lst2.index(multOddMaxAndMinNum) != 0:
        lst2.index(multOddMaxAndMinNum) = 0
    print(lst2)    
    
    