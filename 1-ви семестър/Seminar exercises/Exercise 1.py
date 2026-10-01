# z Да се напише програма, която да намира сумата и средно аритметичното на четните и нечетните от поредицата, като елементите се вкарват от потребителя. Потребителят казва колко числа да вкараме.
numbers = int(input("Брой на числата: "))
x = 0
sumEvenNum = 0
sumOddNum = 0
evenNumCount = 0
oddNumCount = 0

for n in range(numbers):
    x = int(input("Въведете желаното число: "))
    if x % 2 == 0:
        evenNumCount +=1
        sumEvenNum += x
    else:
        oddNumCount += 1
        sumOddNum += x
        
arithmeticEvenNum = sumEvenNum / evenNumCount
arithmeticOddNum = sumOddNum / oddNumCount
print("Средно аритметично на четни числа: ", arithmeticEvenNum)
print("Сума на четни числа: ", sumEvenNum)
print("Средно аритметично на нечетни числа: ", arithmeticEvenNum)
print("Сума на нечетни числа: ", sumOddNum)
print()
print()


# 2 задача - Да се напише програма за определяне на максималното четно число и минимума на нечетните числа в поредица от въведените от потребителя числа. Да се определи броя на четните и нечетните числа.
nums = int(input("Брой на числата: "))
x = 0
evenNumCount = 0
oddNumCount = 0
maxEvenNum = 0
minOddNum = 0

for n in range(nums):
    x = int(input("Въведете желаното число: "))
    if x % 2 == 0:
        evenNumCount +=1
        if maxEvenNum == 0 or x > maxEvenNum:
            maxEvenNum = x
    else:
        oddNumCount += 1
        if minOddNum == 0 or x < minOddNum:
            minOddNum = x

print("Броят на четните числа е: ", evenNumCount)
print("Броят на нечетните числа е: ", oddNumCount)
print("Максималното четно число е: ", maxEvenNum)
print("Минималното нечетно число е: ", minOddNum)
print()
print()

# 3 задача - Проверете дали подаденото число от потребителя е в граници от [n до m]
n = int(input("Въведете долна граница на интервала: "))
m = int(input("Въведете горна граница на интервала: "))
x = int(input("Въведете число: "))
if x >= n and x <= m:
    print("Числото не е в подадения интервал")
else:
    print("Числото е в интервалът")
print()
print()

# 4 задача - Да се напише програма, която преброява числата със стойност в избрани от потребителя граници в поредица от числа. Да се определи и сумата на числата, лежащи  в зададения от потребителя интервал.
n = int(input("Въведете долна граница на интервала: "))
m = int(input("Въведете горна граница на интервала: "))
countNumInInterval = 0
sumNumInInterval = 0
nums = int(input("Брой на числата: "))
for x in range(nums):
    y = int(input("Въведете желаното число: "))
    if y >= n and y <= m:
        countNumInInterval += 1
        sumNumInInterval += y
    else:
        print("Подаденото число не е в подадения интервал")

print("Броят на числата е: ",countNumInInterval)
print("Сумата на числата, които влизат в интервала е: ",sumNumInInterval)
print()
print()


# 5 задача - Напишете програма, която n цели числа повдига на избраната степен. Броят, всички числа и техните степени се въвеждат от потребителя. 
nums = int(input("Въведете броя на числата: "))
for x in range(nums):
    num = int(input("Въведете избраното число: "))
    stepen = int(input("На коя степен да се повдигне даденото число: "))
    result = num ** stepen
    print(num)
    print(stepen)
    print(result)
print()
print()

# 6 задача - Напишете програма, която намира сумата и произведението само от положителните числа в поредица от въведени от потребителя стойности. Използвайте стойност -99 за край на въвеждането.
finishNum = -99
sumNum = 0
numMultiplication = 1
num = 0

while num != finishNum:
    x = int(input("Въведете число: "))
    if x == finishNum:
        break
    if x > 0:
        sumNum += x
        numMultiplication *= x
    else:
        print("Подаденото число не е положително!")

print("Сума на положителните числа:", sumNum)
print("Произведение на положителните числа:", numMultiplication)
print()
print()

# 7 задача - Въведете петцифрено число. Извадете всяка негова цифра на един ред с разделител ";", сумата на цифрице и тяхното произведение
num = int(input("Въведете число: "))

d1 = num // 1000
d2 =  (num // 100) % 10 
d3 = (num // 10) % 10
d4 = num % 10 

sumDigits = d1 + d2+ d3 + d4
multiplyDigits = d1 * d2 * d3 * d4

print(sumDigits)
print(multiplyDigits)
print()
print()

   
    
        

    
