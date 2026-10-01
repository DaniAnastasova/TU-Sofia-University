# 1 зад - Прочети две числа и знак за операция (+, -, *, /) и извърши съответната операция.
# num1 = float(input("Въведи число: "))
# num2 = float(input("Въведи число: "))
# digit = input("Въведи знак за операция: ")

# if digit == "+":
#     sum = num1 + num2
#     print("Сумата е:", sum )
# elif digit == "-":
#     sum = num1 - num2
#     print("Сумата е:", sum )
# elif digit == "*":
#     multiply = num1 * num2
#     print("Произведението е:", multiply )
# elif digit == "/":
#     if(num2 != 0):
#         calculate = num1/num2
#         print("Резултатът е:",calculate)
#     else:
#         print("С 0 не се дели")


# 2 задача - Проверка дали годината е високосна. Прочети от клавиатурата година (цяло число).Провери дали тя е високосна, като използваш следните правила:Високосна е, ако се дели на 400, Или се дели на 4, но не и на 100
# year = int(input("Въведи година: "))
# if year % 400 == 0 or (year % 4 == 0 and year % 100 != 0):
#     print(f"{year} година е високосна")
# else:
#     print(f"{year} година не е високосна")

# 3 задача - Напиши функция is_even(number), която: Приема едно цяло число. Връща (или отпечатва) съобщение дали е четно или нечетно.
# def is_even(num):
#     if(num % 2 == 0):
#         print("Числото е четно")
#     else:
#         print("Числото е нечетно")
# number = int(input("Въведете число: "))
# is_even(number)

# 4 задача - Въведете цяло положително число NUM (5 < NUM < 15). След това се въвеждат толкова на брой числа колкото е стойността на NUM. Въведените числа са в [-100; 100]. Намерете средната сума на положителните числа, на отрицателните, броя на положителните и отрицателните и всички елементи, които са кратни на 3 и 5. Намерете броят на положителните числа, които имат остатък 3 при деление на 6 
# num = int(input("Въведете число: "))
# sum_positive = 0
# sum_negative = 0
# count_positive = 0
# count_negative = 0
# threeAndFive = []
# countPlusNumWithThree = 0

# if num <= 5 or num >= 15:
#     print("Невалидно число")
# else:
#     for i in range(num):
#         n = int(input("Въведете число: "))
#         while n < -100 or n > 100:
#             print("Невалидно число")
#             n = int(input("Въведете число: "))
        
#         if n > 0:
#             count_positive += 1
#             sum_positive += n
#             if n % 6 == 3:
#                 countPlusNumWithThree += 1
#         elif n < 0:
#             count_negative += 1
#             sum_negative += n
        
#         if n % 3 == 0 and n % 5 == 0:
#             threeAndFive.append(n)

#     avg_positive = sum_positive / count_positive if count_positive > 0 else 0
#     avg_negative = sum_negative / count_negative if count_negative > 0 else 0

#     print("Брой положителни:", count_positive)
#     print("Брой отрицателни:", count_negative)
#     print("Средна сума на положителните:", avg_positive)
#     print("Средна сума на отрицателните:", avg_negative)
#     print("Елементи кратни на 3 и 5:", threeAndFive)
#     print("Брой положителни с остатък 3 при деление на 6:", countPlusNumWithThree)  

# 5 зад. - Въведи списък от числа, като потребителят въвежда колко да са числата. Създай нов списък, съдържащ квадратите на тези числа
# countN = int(input("Колко числа да съдържа списъкът?: "))
# lst = []
# lst2 = []
# for i in range(countN):
#     num = int(input("Въведи число: "))
#     lst.append(num)

# for x in lst:
#     x = x ** 2
#     lst2.append(x)
# print(lst)
# print(lst2)

# 6 зад. - Въведи списък от думи. Създай речник, в който ключовете са думите, а стойностите са дължините на думите.
# niz = input("Въведи думи: ").split(" ")
# d = {}

# for i in niz:
#     d[i] = len(i)
# print(d)

# 7 зад. - Въведете две числа: множител и брой. Създайте списък с положителни числа, кратни на множителя, дълъг колкото е броят, в нарастващ ред.
num1 = int(input("Въведете множител: "))
num2 = int(input("Въведете броя числа в списъка: "))

lst = []

for i in range(1, num2 + 1):
    lst.append(num1 * i)

print(lst)