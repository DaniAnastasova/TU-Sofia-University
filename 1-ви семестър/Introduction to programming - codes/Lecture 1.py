print("Hello Python!")
print(2+3) # събиране
print(2-3) # изваждане
print(2*3) # умножение
print(2/3) # деление
print(2//3) # цяло число от деление
print(2%3) # остатък от деление
print(2**3) # 2 на трета степен
print()
print()


# Печатане на числата от 1 до 100
for x in range(1, 100):
    print(x)
# Това ще разпечата числата от 1 до 99
print()

for x in range(1, 101):
    print(x)
# Това ще разпечата числата от 1 до 100
print()

for x in range(1, 101, 2):
    print(x)
# Това ще разпечата нечетните числа от 1 до 100
print()
print()


#Сума на числа
sum = 0
for i in range(3):
    # x = input(f"[{i+1}] = ") -  ще даде string
    x = int(input(f"[{i+1}] = ")) # ще даде int
    sum += x # sum = sum + x
print("Sum =", sum)
print()

# подобрено 
numbers = int(input("How many numbers you want to sum? "))
sum = 0
for i in range(numbers):
    x = int(input(f"[{i+1}] = ")) 
    sum += x # sum = sum + x
print("Sum =", sum)
print()
print()


# Събиране на random генерирани числа
import random
numbers = int(input("How many random numbers you want to sum? "))
sum = 0
for i in range(numbers):
    x = random.randrange(-10,10) # това дава от кое до кое число да се събират. В случая от -10 до 9
    print(x, end=" ") # Отпечатва числото x на екрана на един ред, разделено с интервал (заради end=" "). Ако не беше написано end=" ", всяко число щеше да се печата на нов ред.
    sum += x 
print("\nSum =", sum) #\n е за нов ред
print()
print()


# Умножение на random генерирани числа
import random
numbers = int(input("How many random numbers you want to multiply? "))
mult = 1
for i in range(numbers):
    x = random.randrange(-10,10)
    print(x, end=" ") 
    mult *= x 
print("\nMult =", mult) 
print()
print()

# Задача
# Числата се сумират докато не се въведе 0
sum = 0
while True:
    x = int(input("x = "))
    if x == 0:
        break
    sum += x
print("Sum =", sum)
print()
print()


# Средно аритметично
import random
numbers = int(input("How many numbers you want to sum? "))
sum = 0
for i in range(numbers):
    x= random.randrange(-10,10) 
    print(x, end=" ")
    sum += x
print("\nSum =", sum, "Average = ", sum/numbers)
print()
print()


# Най - малко число в диапазон
sum = 0
min = 0
while True:
    x = int(input("x = "))
    if x == 0:
        break
    sum += x
    if min == 0:
        min = x
    elif min > x:
        min = x
print("Sum =", sum, "Min =", min)
print()
print()
