# Списък - List
list1 = [1,3,5,7]
# Числото 1 стои на 0 позиция, 3- на 1-ва позиция,5 - 2ра позиция, 7-3та позиция
# Може да се обхожда и на обратно като се започне отзад напред и започва от -1,-2,-3
list2 = list('Python')
print(list2)
print()

list3 = []
list3.append(30)
list3.append(10)
print(list3)
print()

#<израз> for <променлива> in <диапазон> if <условие>
# Числа, които не се делят на 3
list4 = [x for x in range(1,21) if x % 3 != 0]
print(list4)
print() 

#[<начало>:<край>:<стъпка>] - резултат нов лист 
list5 = [1,2,3,4,5,6,7]
print(list5[::-1])
print(list5[1:])
print(list5[:-1])
print(list5[-1:])
print()

# Обхождане на лист
lst = [1,2,44,8,10]
# По този начин не можем да променяме елементите на листа
for x in lst:
    print(x)
print()
# Функция len - дава броя на елементите в списъка
# Така можем да променяме елементите на листа 
for ind in range(len(lst)):
    lst[ind] = ind * 10
print(lst)
print()
print(min(lst))
print(max(lst))
print(sum(lst))
# print(lst.index(2)) - Връща индекса на подаденото число, на коя позиция седи даденото число
print(lst.count(2)) # връща броя на подаденото число
print(lst.append(30))
print(lst.insert(0,200))
#print(lst.remove(2))
print(lst.pop(0))
del lst[1]
print(lst)
lst.reverse()
print(lst)
lst.sort(reverse=True) # в низходящ ред 
print(lst)


# Tuple - Неизменяеми тип данни 
t1 = tuple("Python")
print(t1)
print(t1[0])
print()

t2 = (2,4,8,10)
print(len(t2))
print(t2.index(2)) # Връща индекса на подаденото число, на коя позиция седи даденото число 
print()
print()


# Dictionary 
d1 = {'name': 'Ivan', 'last_name': 'Petrov'}
print(d1)
print()

d2 = dict(name = 'Ivan', lastName = 'Petrov')
print(d2)
print()

d3 = dict([('name','Ivan'), ('lastName', 'Petrov')])
print(d3)
print()

d4 = {}
d4['name'] = 'Ivan'
d4['lastName'] = 'Petrov'
d4['Age'] = 20
# d4['name'] = 'Petko' - Така променя стойността на ключа name - от Иван ще стане Петко
print(d4)
print()
# Има функции len(), in, del(), keys(), values()
del d4['Age']
print(d4)
print()

# for key in d4.keys(): - Така обхождаме всички ключове. Връща обект от ключовете
# for value in d4.values(): - Така обхождаме всички стойности. Връща обект от всички стойности 

dictkeys = list(d4.keys())
print(dictkeys)
dictkeys.sort()
print(dictkeys)
print()
print()


# Set - множества - спада към изменяеми типове данни- Няма промяна на конкретен елемент 
s1 = {1,3,5,7}
print(s1)
print()
print()

s2 = set([1,2,3,3,2,1])
print(s2)
print()
print(len(s2))
print()
s2.add(10)
print(s2)
print()
s2.remove(3)
print(s2)
print()
s2.discard(1)
print(s2)
print()


# обединение |
s3 = s1|s2
print(s3)
print()

# разлика (-) - Остават тези числа от първото множество, които ги няма във второто множество
print(s1)
print(s2)
s4 = s1 - s2
print(s4)
print()

# Пресичане
s5 = s1&s2
print(s5)
print()

# Симетрична разлика ^
s6 = s1^s2
print(s6)
print()
print()


# Низове - неизменяем тип данни - string
# len, strip()
l1 = "hello Python"
l1.strip() # Маха празните пространства - в началото и края 
print(l1)
# strip("!*?.") - Може всякакви елементи 
# lower
# upper 
# <низ>.index(<>)
# <низ>.count(<>)
# <низ>.split()
# <низ>.replace(<заменяем низ>, <заместващ низ>, <лимит>)


# 1 зад. - Създаваме празен лист, потребителят въвежда колко елемента ще има в този лист, запълваме листа с цели числа, които се въвеждат от потребителя. Намираме сумата на тези елементи от списъка, чиято стойност е положителна и чиято стойност на десетиците е кратна на 3. Намираме индекса на най-голямото отрицателно число.
from numpy import empty
l = []
countNum = int(input("Въведи броя на елементите в списъка: "))
for x in range(countNum):
    l.append(int(input("Въведи желаното число: ")))
print(l)

sum = 0
for n in l:
    if(n > 0 and ((abs(n) // 10) % 10) % 3 == 0):
        sum += n
print(sum)

maxNum = 0
newlst = []
for m in l:
    if(m < 0):
        newlst.append(m)
    else:
     print("....")

if not newlst:
    print("Няма отрицателни числа.")
else:
    maxNum = max(newlst)
    
    
if maxNum in l:
    print(l.index(maxNum))

print()
print()

# 2 зад. Потребителят връща цяло положително число. На база това число създаваме 2 кортежа. В първия tuple елементите са цифрите на числото в прав ред.  а във втория - елементите на числото в обратен ред 
# Пример - 123 
num = input("Въведи цяло положително число: ")
t1 = ()
for d in num:
    t1 += (int(d),)
print("Първи кортеж:", t1)
t2 = ()
for d in reversed(num):
    t2 += (int(d),)
print("Втори кортеж:", t2)