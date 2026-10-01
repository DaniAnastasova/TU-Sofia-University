# Създаване на празно множество
# Празното множество е mutable

s = set()
print(type(s), s)
print()
print()

s = {1,2,3,4,5,1}
# Няма да разпечата 1, 2-ри път, защото вече го има 1 път като елемент
print(s, len(s))
# Множество написано така s = {} -  НЕ създава празно множество, а речник
print()
print()

s = set("abracadabra")
print(s)
print()
print()

# set comprehension
s = {x for x in range(10) if x % 2 == 0}
print(s)
print()
print()

s1 = {1,2,3,4,5}
s2 = {1,2,6,7}
print(s1.difference(s2), s1 - s2)
print(s1.union(s2), s1|s2) # Обединение на множества
print (s1.intersection(s2), s1&s2)
print(s1.symmetric_difference(s2), s1^s2)

s.clear()
print(s)
print()
del s
# print(s) - NameError, защото изтрива цялата променлива s 
s1.difference_update(s2)
print(s1,s2)
print()

s1 = {5,4,1,2,3}
s1.symmetric_difference_update(s2)
print(s1,s2)
print()

s1 = {5,4,1,2,3}
s1.intersection_update(s2)
print(s1,s2)
print()

s1.update([1,11,32,3,4,"abc"])
print(s1)
print()

s1.add(44)
print(s1)
#s1.add([1,11,22])
#print(s1)
s1.add(1)
print(s1)
print(s1.issubset(s2), s1.issuperset(s2))
print(s1 <= s2, s1 >= s2)
print()
print()

fs = frozenset([1,2,"abd"]) 
#  frozenset - Дефинира ummutable set - не може да се променя множеството 
print(fs)
print()
print()

# Задача - От клавиатурата се въвежда 1 година. Да се разпечата true, ако цифрите са еднакви на брой, в противен случай - false
year = input("Input year: ")
print(type(year), year)
sYear = set(year)
print(type(sYear), sYear)
print(len(sYear) == len(year)) 
print()
print()
print()

# Dictionary - Речник
d = {}
#  Празен речник
print(type(d), d)
d = {1: "one", 2: "two"}
print(d)
print(d[2])
d[3] = "three"
print(d)
d[2] = "twoo"
print(d)
print()

print(d.get(4)) # Няма стойност на ключа 4
print(d.get(4, 11)) # Когато няма дадена стойност на посочената позиция, връща това, което му подаваме, в случая - 11
print(d.items())
print(d.keys())
print(d.values())
print()
for k,v in d.items():
    print(k, "->", v)
print()
    
for k in d.keys():
   print(k)
print()

for i,v in enumerate(d.values()):
    print(i,v)
print()

for i,d in enumerate(d.items()):
    print(i,d)
print()

#for i,el in enumerate(d[0]):
#    print(i,el)
#print()

d = dict([(1, "one"), (2, "two")])
print(d)
s = {(x, x**3) for x in range(10)}
print(type(s), s)
d = {x:x**3 for x in range(10)}
print(type(d), d)
print()

d1 = d.fromkeys(d.keys())
print(type(d1), d1)
print()

d.update([(11, "eleven")])
print(d)
print()

for k,v in reversed(d.items()):
    print(k,v)
print()
print()

#for el in reversed(s):
 #   print(el)

for el in s1:
    print(el)
print()
print()

d.clear()
print(d)
del d
#print(d)
d = {x:x*2 for x in range(5)}
print(type(d), d)
d1 = d.copy()
print(type(d1), d1)
print(3 in d1)
print(11 in d1)
print()
print()

print(d1.popitem())
print(d1)
print()
print(d1.pop(0))
print(d1)
print()

if 11 in d1:
  print(d1.pop(11))
print()

print(sorted(d1, reverse=True))
l = [x**2 for x in range(5)]
print(l)
print()
l.sort(reverse=True)
print(l)
print()
print(sorted(l, reverse=True))
print(sorted(s))
