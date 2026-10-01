# list comprehension - създаване на списък чрез генератор. Списък, създаден с цикъл на 1 ред. Циклична обработка на списък на 1 ред.
# list - mutable - изменяем списък

# Задача - Да се намери минималният четен елемент от списък.
import random
l = []
for i in range(10):
    l.append(random.randint(-10, 10))
print(l)
is_init = False 
for x in l:
    if x % 2 == 0:
        if not is_init: 
            minx = x
            is_init = True
        elif minx > x:
            minx = x
if is_init:
   print("min = ", minx)
else:
    print("No such data....")
print()
print()


# Задачата чрез list comprehension
l = [random.randint(-100, 100) for i in range(10)]
print(l)
ll = [x for x in l if x % 2 == 0]
print(ll)
if(len(ll) > 0):
    print("min: ", min(ll))
else:
    print("No such data....")
print()
print()


# Създаване на списък чрез въвеждане на данни от клавиатурата
l1 = [int(input(f"{i} = ")) for i in range(3)]
print(l1) 
print()
print()


# Абстрактни структури от данни - стек, опашка 

# Опашка - FIFO - first in first out - добавяне на елемнти винаги в края на списъка (append) и премахване на елементи винаги от началото на списъка(pop(0))
# pop(0) - премахва първия елемент от списъка
l.append(333) # добавяне на елемент в края на опашката
print(l)
l.pop(0) # премахване на елемент от началото на опашката
print(l)
print()

# Стек(stack)
# Last in first out - LIFO
l.append(444) # добавяне на елемент в края на стека
print(l)
#l.pop() - премахване на елемент от края на стека. Когато няма параметър, pop() премахва последния елемент
print("last: ", l.pop()) # премахване на елемент от края на стека
print(l)
print()
print()

import random
from collections import deque # double ended queue - двупосочна опашка
# deque 
dq = deque(l) # създаване на двупосочна опашка от списък
print(dq)

# FIFO
dq.append(-111)
print(dq)
dq.popleft() # премахване на елемент от началото на опашката. popleft() - премахва първия елемент от опашката
print(dq)
print()


# LIFO
dq.append(-222)
print(dq)
dq.pop() # премахване на последния елемент от опашката
print(dq)
print()
print()

# Tuple - кортеж - неизменяем списък - immutable 
# Тук не съществуват методи като добавяне, премахване ....
t = ()
print(type(t), t)
t = (1, 2, 3, 4, 5)
print(t)
x1, x2, x3, x4, x5 = t  # разопаковане на кортеж
print(x1, x2, x3, x4, x5)
t1 = x1, x2, x3, x4 
print(type(t1), t1)
t = (1, ) # кортеж с 1 елемент
print(type(t), t)
t = 1
print(type(t), t) # цяло число
t = (1)
print(type(t), t) # цяло число
print()

t = (1,2,3,4)
print(t[1]) # достъп до елемент от кортеж
# t[1] = 11  - грешка - кортежът е неизменяем
print()

# конвертиране на списък в кортеж
t = tuple(l)
print(type(l), l)
print(type(t), t)
print()
print()

print("count: ", t.count(20)) # брой срещания на елемент в кортеж
if -1 in t:
     print(t.index(-1)) 
print()
print()

l11 = list(t)
print(l11)
print()
print()


# Матрици 
m = [[1,2,4], [4,5,6]]
print(type(m), m)
for row in m:
    for x in row:
        print(x, end=" ") # end =" " - за да не се слага нов ред след всеки елемент
    print()

m = [[random.randint(0,100) for col in range(4)] for row in range(3)]
print(m)
print()

m = []
for row in range(3):
    l = []
    for col in range(4):
       l.append(random.randint(0,10))
    m.append(l)
print(m)
print()
print()

import numpy as np
m = np.matrix([[1,2], [4,5]])
print(type(m), m)

l2 = [x for x in np.arange(0, 10, 2.5)] # създаване на списък с числа от 0 до 10 с крачка 2.5
print(type(l2), l2)

num = complex(1,2)
print(num)
print(type(num), num)
