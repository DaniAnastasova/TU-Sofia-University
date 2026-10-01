# Дефиниране на функция
# def <име на функцията> (списък  с параметри): 
#     <тяло на функцията>
#     return <връща резултат или приключва изпълнение ако не връща резултат>


# Извикване на функцията
# <име на функция> (аргументи):
# <променлива> = <име на функция> (аргументи): 


# Предаване на аргументи на една функция 
# - Позиционно 
# def func(name, age, city):
#   print(f'Hello {name}, you are {} old, and you're from {city}')
# func('Ivan, 20, 'Plovdiv')


# - формат <keyword> = <value>
# func (age = 20, city = 'Plovdiv', name = 'Ivan')


# - Задаване на стойност на функция по подразбиране 
#  def func(name, age, city = 'Plovdiv'):
# Ако зададем нова стойност на city, ще се презапише и ще използва новата подадена стойност, ако не се подаде стойност на city ще даде по default стойността


# def psum(*num) * - това означава, че при извикването може да задам колкото параметри поискам
# * - това означава, че при извикването може да задам колкото параметри поискам
# def psum(*num):
#  result = 0
#  for x in num:
#    result += num
#  return result
#
# suma = psum(1,3,5)
# suma1 = psum(10,20,30,40,50....)


# lambda функции - Проста функция, без сложни сметки 
# lambda <аргументи>: <резултат>

# <променлива> = lambda <аргументи>: <резултат>

# Извеждане на нечетни числа с ламбда функция
# num = 10
# L = lambda x: 2 * x + 1
# for k in range(num):
#  print(L(k)) 

#  print(L(k)) 
# for k in range(num):
#  print((lambda x: x * x)(k + 1))


# Локални и глобални променливи
# Локални - тези, които са само във функция, не може да бъде извиквана другаде 
# глобални - променливи извън функция 

# num = 3
# def f1():
#     num = 10 - така крайният принт ще принтира, че нъм е 3, защото така променливата приема стойността само във функцията
#     global num = 10 - така последният принщ ще принтира, че нъм е 10 
#     print(num)
# f1()
# print(num)

# 1 зад - Пишем програма, която намира лице на геометрична фигура. Първо  се въвежда вида на фигурата- квадрат, правоъгълник, правоъгълен триъгълник. За пресмятане на лице на отделните фигури, напише отделни функции.
import errno
from random import random
from shutil import register_unpack_format

a = int(input("Въведете число: "))
b = int(input("Въведете число: "))
c = int(input("Въведете число: "))
def square(a):
    s = a * a
    return s

def rectangle (a,b):
    s = a * b
    return s

def triangle(a,b,c):
    s = (a*b) / 2
    return s
print(square(a))

a = int(input("Въведете число: "))
b = int(input("Въведете число: "))
print(rectangle(a,b))

a = int(input("Въведете число: "))
b = int(input("Въведете число: "))
c = int(input("Въведете число: "))
print(triangle(a,b,c))


# 2 зад - Функция с 2 аргумента, 1ви - списък с цели числа, 2ри-цяло число. Променете всички елементи от списъка, чиято стойност е по- голяма от дадения 2ри аргумент, те стават нула.
import random
lst = []
num = int(input("Въведете число: "))
for i in range(5):
    nums = random.randrange(1, 20)
    lst.append(nums)
    
def func(lst, num):
    for i in range(5):
        if(lst[i] > num):
            lst[i] = 0
        else:
            continue
    return lst
print(lst)
print(func(lst, num))

# 3 зад - Реализиране на калкулатор - събиране, изваждане, умножение, деление
firstNum = int(input("Въведете число "))
secondNum = int(input("Въведете число "))
try:
    operator = input("Въведете желана операция: ")
    if(operator != '+' or operator != '-' or operator !='*' or operator !='/'):
        raise ValueError("Невалидна операция")
except ValueError as error:
    print(error)
    
    
if (operator == '+'):
    def plusFunc(a,b):
        result = a + b
        return result
    print(plusFunc(firstNum,secondNum))

elif (operator == '-'):
    def Func1(a,b):
        result = a - b
        return result
    print(Func1(firstNum,secondNum))
     
elif (operator == '*'):
    def Func2(a,b):
        result = a * b
        return result
    print(Func2(firstNum,secondNum))

elif (operator == '/'):
    def Func3(a,b):
        result = a / b
        return result
    print(Func3(firstNum,secondNum))
    

# 4 зад - Функция, която проверява дали числото е палиндром, ако е палиндром е true, а ако не е връща false
num = int(input("Въведете число: "))

def Palindrome(a):
    textNum = str(a)
    reverseTextNum = textNum[::-1]  
    if (textNum == reverseTextNum):
      return True
    else:
      return False

print(Palindrome(num))
