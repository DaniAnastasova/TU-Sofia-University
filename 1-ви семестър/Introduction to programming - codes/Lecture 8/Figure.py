# Създвама клас с 3 данни double. създавам конструктрот с параметри д1,д2,д3 и инициализацията да е да1 най-малко д2 по срезата и д3 най- голямо. СТР-предифинрайте. метод equals, който проверява дали 3те данни са еднакви. Принт- разпечатва информацията за текущо активния обект.п
# инициализирайте данните на род. клас, като д1,д2,д3 са отрицатени числа или не отговарят на условието за триъгълник, да се генерира triangle exepsion. getArea(намира лицето на триъгълник), getPerimeter,  equals - сравянава дали двата триъгълника са еднакви сравнява по площ, дефинира се метод similar - по 2 параметъра показва дали са подобни 2 триъгълника
# дефинирайте  triangle exeption
# напишете главната програма 

class Figure():
    def __init__(self,d1,d2,d3):
       self.d1 = min(d1,min(d2,d3)) 
       self.d3 = max(d1,max(d2,d3))
       self.d2 = d1+d2+d3-(self.d1+self.d3)
    
    def __str__(self):
        return f"({self.d1},{self.d2},{self.d3})"
    
    def __repr__(self):
        return f"({self.d1},{self.d2},{self.d3})"
    
    def equals(self, pf):
        return self.d1 == pf.d1 and  \
            self.d2 == pf.d2 and  \
            self.d3 == pf.d3
    
    def getArea(self):
        pass

    def getPerimeter(self):
        raise NotImplementedError()
    
    def print(self):
        print(self)
        