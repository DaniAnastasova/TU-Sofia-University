from asyncio.windows_events import NULL
import string
from turtle import position


class Person1:
    def __init__(self, last_name: str, internship: int, salary: int):
        self.last_name = last_name
        self.internship = internship
        self.salary = salary 
    
    def __str__(self):
        return f"{self.last_name},{self.internship},{self.salary}"

    def __repr__(self):
        return f"{self.last_name},{self.internship},{self.salary}"
    
class Person2(Person1):
    def __init__(self, last_name, internship, salary, name_of_position: str):
        super().__init__(last_name, internship, salary)
        self.name_of_position = name_of_position
        
    def print_info(self):
        print(f'Name - {self.last_name}: Internship- {self.internship}: Salary - {self.salary}: Position - {self.name_of_position}')
    

def appendPeople(n, people_list): 
    for i in range(n):
        last_name = input("Въведете фамилия: ")
        try: 
            internship = int(input("Въведете години стаж: "))
            salary = int(input("Въведете заплата: "))
        except ValueError as error:
            print(error)
            continue
        
        position = input("Въведете позиция: ")
        person = Person2(last_name, internship, salary, position)
        
        people_list.append(person)
    
    return people_list
        
def addOnePerson(last_name, internship, salary, name_of_position, people_list):
    person = Person2(last_name, internship, salary, name_of_position)
    people_list.append(person)
    
    return people_list
    
def minSalary(people_list):
    if not people_list:
        print("Празен списък")
    else:
        min_salary_person = people_list[0]
        for person in people_list:
            if person.salary < min_salary_person.salary:
                min_salary_person = person
    
    return min_salary_person

def oldestPerson(people_list):
    if not people_list:
        print("Празен списък")
        return False
    oldPerson = people_list[0]
    for person in people_list:
        if person.internship > oldPerson.internship:
            oldPerson = person
        
    return oldPerson

def deletePerson(people_list, last_name):
    if not people_list:
        print("Списъкът не съществува")
        return False
    else:
        for person in people_list:
            if person.last_name == last_name:
                del person
            
    return people_list

def deletePeople(people_list):
    for person in people_list:
        del person
    return people_list

def sortInternship(people_list):
    people_list.sort(key = lambda person: person.internship)

def dataForPosiotion(people_list):
    for person in people_list:
        return (f"{person.last_name} - {person.name_of_position}")

def avarageSalaryUder35YearsIntership(people_list):
    lst = []
    people = 0
    for person in people_list:
        if person.internship < 35:
            lst.append(person)
            people +=1
            
    result = 0
    for i in lst:
        result += i.salary
    
    if people == 0:
        print("Невалидна операция")
        return False
    else:
        averageSalary = result / people
        return averageSalary
    
people_list = []
addOnePerson("Ivanov", 10, 1500, "Engineer", people_list)
addOnePerson("Petrov", 5, 1200, "Engineer", people_list)
addOnePerson("Georgiev", 20, 2000, "Manager", people_list)

print(appendPeople(1, people_list))
print(addOnePerson("Stoyanov", 35, 4000, "engineer", people_list))
print(minSalary(people_list))
print(oldestPerson(people_list))
print(deletePerson(people_list, "Georgiev"))
print(deletePeople(people_list))
print(dataForPosiotion(people_list))
print(avarageSalaryUder35YearsIntership(people_list))

