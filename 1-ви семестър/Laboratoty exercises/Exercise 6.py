# Класове -  Шаблон за производство на обекти

# Дефиниране на клас 
# class <Име на класа, с главна буква>:
#    <описание на класа>

#__init__() - Конструкторът в python

from turtle import st

class FirstClass:
    x = 10

first = FirstClass()
print(first.x)
second = FirstClass()
print(second.x)

class Animal:
    def __init__(self, name, age):
        self.name = name
        self.age = age
        
animal1 = Animal("Rex",2)
print(animal1.name)
print(animal1.age)
animal1.name = "Tom"
print(animal1.name)
print()
print()

# 2-ри вариант с private променлива
# __ - пред даден атрибут означава, че той е частен. В случая age е частна променлива, тя не може да се използва извън конструктора.
class Animal:
    def __init__(self, name, age):
        self.name = name
        self.__age = age
    # Така достъпваме self.__age = age,ако както в случая age е private променлива
    def get_age(self):
        return self.__age
    def set_age(self, age):
        self.__age = age        
        
animal1 = Animal("Rex",2)
print(animal1.get_age())
animal1.set_age(5)
print(animal1.get_age())
print()
print()

# 3 - Наследяване на клас
# Така Dog() наследява всичко от класа Animal 
class Dog(Animal):
    pass
dog = Dog("Sharo",4)
print(dog.get_age())
print(dog.name)
print()
print()

# 4 - Добавяне на променлива 
class Dog(Animal):
    def __init__(self, name, age, color):
        # 1-ви начин
        super().__init__(name,age)
        # 2-ри начин
        # Animal.__init__(self,name, age)
        self.color = color
        
dog1 = Dog("Rexi",10, "black")
print(dog1.name)
print(dog1.get_age())
print(dog1.color)
print()
print()

# 5 - Специални методи
def __str__(self):
    return f'{self.name} {self.__age}{self.color}'


# 1 зад. - Дефинирате клас Person с атрибути име, фамилия, възраст, националност. Ще предефинирате конструктор който да инициализира полетата на класа. Добавяте метод в класа print info, който отпечатва имената и националността. Създайте 3 инстанции-обект на класа и за тях извикайте метода print info.
class Person():
    def __init__(self, name, lastName, age, natonality):
        self.name = name
        self.lastName = lastName
        self.age = age
        self.nationality = natonality
        
    def print_info(self):
       print(f'{self.name} - {self.nationality}')
        
person1 = Person("FirstName", "FisrtLN", 10, "bulgarian")
person2 = Person("SecondName", "SecondLN", 15, "bulgarian")
person3 = Person("ThirdName", "ThirdLN", 20, "bulgarian")

person1.print_info()
person2.print_info()
person3.print_info()
# 2 зад - Добавяме клас студент, който наследява person с 2 нови атрибута - университет и година на обучение. Ще предефинираме метода print info освен за имена и националност да принтира и стойност на новите полета. Създаваме 2 обекта от класа студент и извикаме принт инфо. 
class Student(Person):
    def __init__(self, name, lastName, age, nationality, university, year, facultetNumber):
        super().__init__(name, lastName, age, nationality)
        self.university = university
        self.year = year
        self.facultetNumber = facultetNumber
        
    def print_info(self):
        super().print_info()
        print(f'{self.university} - {self.year} - фак. № {self.facultetNumber}')


student1 = Student("FirstName", "FirstLN", 25, "bulgarian", "TU", 5, 121225189)
student2 = Student("SecondName", "SecondLN", 19, "bulgarian", "TU", 1, 121225188)

student1.print_info()
student2.print_info()

# 3 зад - Класа лектор наследява person. Има 2 нови полета - университет и опит. Трябва да предефинирате прин инфо така че да притнира информация за новите полета.
# 4 - Добавяме към кода в класа лектор речник в който ключа е фак номер на студент а стойност е оценка на студент. В класа студент добавяте нов атрибут - фак номер. В класа лектор добавяме нов метод който добавя студент с ключ = фак номер и value = 0, в класа лектор се добавя метоз сетГраде- той по фак номера поставя оаценка на съответния студент. предефинирайте принт инфо за лектор , така че да отпечатва и студентите на преподавателя с техните оцевки. Добавете към класа лектор нов метод който изчислява средния успех на студентните на преподавателя.
class Lector(Person):
    def __init__(self, name, lastName, age, nationality, university, staj):
        super().__init__(name, lastName, age, nationality)
        self.university = university
        self.staj = staj
        self.students = {}  

    def print_info(self):
        super().print_info()
        print(f'{self.university} - {self.staj}')
        if self.students:
            print("Студенти и оценки: ")
            for fn, grade in self.students.items():
                print(f'Фак. №- {fn}: {grade}')
            print(f'Среден успех: {self.average_student_grade()}')
        else:
            print("Няма добавени студенти")

    def add_student(self, student):
        self.students[student.facultetNumber] = 0

    def set_grade(self, facultetNumber, grade):
        if facultetNumber in self.students:
            self.students[facultetNumber] = grade
        else:
            print("Не съществува такъв факултетен номер")

    def average_student_grade(self):
        if not self.students:
            return 0
        return sum(self.students.values()) / len(self.students)


lector1 = Lector("Mariq", "Georgieva", 45, "bulgarian", "TU", 20)

lector1.add_student(student1)
lector1.add_student(student2)
lector1.set_grade(121225189, 3)
lector1.set_grade(121225188, 4.50)
lector1.print_info()
