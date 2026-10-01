# Оператори за сравнение 
# == - 
# !=
# <
# <=
# >
# >= 
# in - проверява дали даден елемент е наличен 
# not - обръща логическия израз - ако е вярно става невярно и обратно
# and - логическо И - и двата израза трябва да са верни 
# or - логическо ИЛИ - поне един от изразите трябва да е верен

x = 10
y = 5
(x == 5) or (y < 10) # True
(y > 10) and (x > 10) # False

# if <логически израз>:
#    <блок с код, който се изпълнява, ако логическият израз е верен>
# else:
#    <блок с код, който се изпълнява, ако логическият израз е невярен>

number = int(input("Enter a number: "))
if number < 1000:
    print(f"{number} < 1000")
elif number > 1000:
    print(f"{number} > 1000")
else:
    print(f"{number} = 1000")
print()
print()

# Цикли - for, while
# for <елемент> in <последователност>:
#    <тяло на цикъла>

# range - генерира последователност от числа
# range(start, stop, step)
# start - начална стойност (включително) - не е задължителен параметър, по подразбиране е 0
# stop - крайна стойност (не включително) 
# step - стъпка (по колко да се увеличава стойността) - не е задължителен параметър, по подразбиране е 1
range(20, 10, -2) # - генерира числата от 20 до 10 (без 10) с стъпка -2: 20, 18, 16, 14, 12

for num in range(1, 11):
    print(num)
print()
print()

# ord - връща числовия Unicode код на даден символ.
for letter in range(ord('a'), ord('z') + 1):
    print(chr(letter))
# chr - връща символа, съответстващ на дадения числов Unicode код. 
print()
print()

# while <логически израз> :
#     <тяло на цикъл>


# while True: 
# if...  

# 1 задача - Потребителят въвежда 3 числа. Намираме най- малкото и принтираме
num1 = int(input("Enter first num: "))
num2 = int(input("Enter second num: "))
num3 = int(input("Enter third num: "))

if ((num1 < num2) and (num1 < num3)):
    print(num1)
elif ((num2 < num1) and (num2 < num3)):
    print(num2)
elif((num3 < num1) and (num3 < num2)):
    print(num3)

# 2 задача - Потребителят въвежда n. N - броя на числата, които трябва да въведе. Числото n >5 и n < 20. N на брой цели числа и от тези n на брой цели числа намира най - малкото
n = int(input("Enter n: "))
if ((n > 5) and (n < 20)):
    smallestNum = int(input("Enter num: "))
    for i in range(n):
        num = int(input("Enter num: "))
        if num < smallestNum:
            smallestNum = num
    print("Най-малкото число е:", smallestNum)
else:
    print("(n <= 5) and (n > 20)")
print()
print()


# 3 задача 
m = int(input("Enter num: "))
for row in range(1, m + 1):
    print('*' * row)
for row in range(m - 1, 0, -1):
    print('*' * row)
