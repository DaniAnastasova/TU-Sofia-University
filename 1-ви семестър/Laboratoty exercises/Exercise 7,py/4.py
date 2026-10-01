class Class1:
    def __init__(self, lst):
        self.lst = lst
        self.lst2 = []
        for item in lst:
            if type(item) == int or type(item) == float:
                self.lst2.append(item)
    
    def show_lst2(self):
        print(self.lst2)
    
    def averageResult(self):
        self.countLst = len(self.lst2)
        self.result = sum(self.lst2)
        if self.countLst == 0:
            print("С 0 не се дели")
        else:
          self.averageReslt = (self.result / self.countLst)
          print(self.averageReslt)
        

obj = Class1([1,"ijdwd", 3, "mwue", 4,6,7,"iwej"])
obj.show_lst2()
obj.averageResult()