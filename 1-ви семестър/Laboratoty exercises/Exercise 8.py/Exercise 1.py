while True:
    try:
     name = input("Въведете име: ")
     if not name.isalpha():
        raise ValueError("Името трябва да съдържа само букви!")
    
     age = int(input("Въведете възраст: "))
     if age < 0 or age > 150:
        raise ValueError("Невалидна възраст!")
     
    except ValueError as error:
        print(error)
        
    else:
      if age >= 18:
        print("Потребителят може да гласува!")
      else:
        print("Потребителят не може да гласува!")
      break

    