# 1 зад.
countNum = int(input("Въведете желания брой числа: "))
lst = []
for i in range(countNum):
    num = int(input("Въведете число: "))
    lst.append(num)

print(3 * lst)
for i in lst:
    print(i)
    
num2 = int(input("Въведете проверяващо число: "))
if (num2 in lst):
    print(f"{num2} се съдържа в списъка")
else:
    print(f"{num2} не се съдържа в списъка")

lst.sort
print(lst)
print(max(lst))

indx = int(input("Въведете желан индекс: "))
lst.remove(lst[indx])
print(lst)

element = int(input("На кой елемент да се промени стойността"))
value = int(input("С какво число да се замести стойността"))
lst[element - 1] = value
print(lst)

# 2 зад 
n = int(input("Колко низа да съдържа списъка?"))
lst = []
for i in range(n):
    niz = input("Въведете желан низ: ")
    lst.append(niz)

maxniz = lst[0]
for i in lst:
    if len(i) > len(maxniz):
        maxniz = i

print("Най-дългият низ е:", maxniz)

searchNiz = input("Въведете низ за търсене: ")
newNiz = input("Въведете низ за замяна: ")

if searchNiz in lst:
    index = lst.index(searchNiz)
    lst[index] = newNiz
else:
    print("Низът не е намерен.")

print("След замяната:", lst)

niz2 = input("Въведете низ за изтриване: ")
newNiz2 = input("Въведете низ за вмъкване: ")
position = int(input("Въведете изрбана позиция: "))

if 0 < position <= len(lst) + 1:
    if niz2 in lst:
        lst.remove(niz2)
    lst.insert(position - 1, newNiz2)
else:
    print("Невалидна позиция.")

print("Краен списък:", lst)

    
# 3 зад.
m = int(input("Колко низа за ключ да съдържа и колко на брой стойности? "))
d = {}

for i in range(m):
    nizForKey = input("Въведете желан низ за ключ:")
    value = int(input("Въведете желана стойност: "))
    d[nizForKey] = value
    
print(d)
searchKey = input("Въведете търсен ключ: ")
if searchKey in d.keys():
    print(f"{searchKey}: {d[searchKey]}")
else:
    print("Няма такъв ключ!")

edit_Key = input("Въведете ключ за промяна: ")
if edit_Key in d:
    newValue = int(input("Въведете стойност за промяна: "))
    d[edit_Key] = newValue
else:
    print("Няма такъв ключ! ")
print(d)

delete_Key = input("Въведете ключ: ")
if delete_Key in d:
   del d[delete_Key]
else:
    print("Няма такъв ключ")

keys = []
value= []

for i in d.keys():
    keys.append(i)

for i in d.values():
    value.append(i)
    
print(keys)
print(value)

d = dict(sorted(d.items()))
print(d)


# 4 зад.
s1 = set()
s2 = set()
m  = int(input("Въведете желания брой числа: "))

for i in range(m):
    num = int(input("Въведете число: "))
    s1.add(num)

for i in range(m):
    num2 = int(input("Въведете число: "))
    s2.add(num2)

print(len(s1))
print(len(s2))

print(s1|s2)
print(s1&s2)

element = int(input("Въведете избран елемент: "))
if element in s1:
    s1.remove(element)
else:
    print(...)

print(s1)
print(s2)

s1.clear()
s2.clear()
print(s1)
print(s2)

# 5 зад. 
from re import search
m = 7
d = {}

for i in range(m):
    nizForKey = input("Въведете желан низ за ключ:")
    value = int(input("Въведете желана стойност: "))
    d[nizForKey] = value

print(d)
maxValue = max(d.values())

for key,value in d.items():
    if(value == maxValue):
        print(f"Ключът с най-голямо стойност е {key}")
    else:
        print(...)

searcKey = input("Избран ключ:")
if searcKey in d.keys():
    newValue = int(input("Въведете желаната нова стойност: "))
    d[searcKey] =  newValue
else:
    print("Няма такъв ключ!")
print(d)

delete_Key = searcKey = input("Избран ключ за изтриване:")
if delete_Key in d.keys():
    del d[delete_Key]
    
print(d)
newKey = input("Въведете нов ключ:")
newValue = int(input("Въведете нова стойност: "))
d[newKey] = newValue
print(d)

# 6 зад. 
# countNameCity = int(input("Въведете броя на ключовете"))
# lst = []
# for i in range(countNameCity):
#     city = input("Въведете име на град: ")
#     lst.append(city)

# newCity = input("Въведете име на град: ")
# lst.append(newCity)