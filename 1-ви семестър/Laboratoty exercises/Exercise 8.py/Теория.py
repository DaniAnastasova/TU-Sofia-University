# try:
#     <код>
# except <тип на грешка>:
#     <обработка на изключени>
# else: - това се изпълнява ако try е правилно и не се изпълнява
#     <код>
# finally: - изпълнява се винаги 
#     <код>

# 1.
# try:
#     print(x)
# except NameError:
#     print("varrable is not definded")
    
# 2. Не препоръчително
# except:
#     print("Error")


# while True:
#     try:
#         num = int(input("Въведи число: "))
#         break
#     except ValueError:
#         print("Стойността трябва да е от тип int")
#     except Exception:
#         print("Error")
   
   
# raise <грешка>
# while True :
#     try:
#         num = int(input("..."))
#         if num < 0:
#             raise ArithmeticError("number must be positive")
#         break
#     except ValueError as error:
#         print(error)
#     except ArithmeticError as err:
#         print(err)
        
# num += 1 
# print(num)


    

