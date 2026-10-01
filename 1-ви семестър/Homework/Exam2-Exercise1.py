from random import randint

while True:
    try:
        num = int(input("Въведете число: "))
        if not (10 < num < 50):
            raise ValueError ("Моля въведете число в интервала от 11 до 49")
        break
    except ValueError as error:
        print(error)
    
mylst_1 = []
a = randint(-2500, -1300)
b = randint(1111, 4444)

for i in range(num):
 while True:
    try:
        x = int(input("Въведете число: "))
        if not(a < x < b):
            raise ValueError ("Въведете коректно число: ")
        mylst_1.append(x)
        break
    except ValueError as error1:
        print(error1)
    
lst2 = []
for i in mylst_1:
    if i < 0:
        lst2.append(i)

countNumDevide4or5 = 0
for i in lst2:
    if (abs(i) // 10 % 10) % 4 == 0 or (abs(i) // 10 % 10) % 5 == 0:
        countNumDevide4or5 += 1

# i % 10 - взима единиците
# i // 10 % 10 - взима десетиците
# i // 100 % 10 - взима стотиците
# i // 1000 - взима хилядните

lst3 = []
count = 0
result = 0

for m in mylst_1:
    if m % 2 == 0 and ((abs(m) // 100) % 10) == 0:   
        lst3.append(m)
        count += 1

for num in lst3:
    result += num

if count > 0:
    res = result / count
    print(res)
else:
    print("Няма елементи за усредняване")


mylst_2 = []
for i in mylst_1:
    if (abs(i) // 1000) == 0 and i % 3 == 0:   
        mylst_2.append(i)


count1 = 0
for idx in range(len(mylst_2)):
    i = mylst_2[idx]

   
    if i % 2 != 0 and idx % 2 == 0:
        count1 += 1

    
    if idx % 2 != 0:
        mylst_2[idx] = 13   

print(count1)

lenLst1 = len(mylst_1)
lenLst2 = len(mylst_2)

if lenLst1 > 2 and lenLst2 > 2:
    if lenLst1 > lenLst2:
        del mylst_1[0]
        del mylst_1[-1]
    else:
        del mylst_2[0]
        del mylst_2[-1]
    