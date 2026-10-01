class ClothesShop:
    def __init__(self, clothe_type, brand, price, quantity, size):
        self.clothe_type = clothe_type
        self.brand = brand
        self.price = price
        self.quanity = quantity
        self.size = size
        
    def sale(self, quantity):
        if self.quanity > 0 and self.quanity > quantity:
           x =  self.quanity - quantity
           return (f"Останало количество - {x}") 
        
        
    
    def discount(self):
        for i in self.clothe_type:
            if 1 <= self.quanity <=3:
                discount = 35/100
                self.price = self.price - (self.price * discount)
                return (f"Цената след отсъпка е: {self.price}") 
            elif 4 <= self.quanity <=6:
                discount = 15/100
                self.price = self.price - (self.price * discount)
                return (f"Цената след отсъпка е: {self.price}") 
            elif self.quanity > 6:
                return (f"Няма отстъпка в цената {self.price}")
            else:
                return ("Количеството е 0")

clothes_list = []
k = int(input("Въведете желаният брой инстанции"))

if k <= 0:
    print("Въведете нова стойност за k")
else:
    for i in range(k):
        clothe_type = input("Въведи вид дреха: ")
        brand = input("Въведи марка: ")
        price = float(input("Въведи цена: "))
        quantity = int(input("Въведи количество: "))
        size = input("Въведи размер: ")
        clothe = ClothesShop(clothe_type, brand, price, quantity, size)
        clothes_list.append(clothe)


def search_by_size_type(clothes_list, size, clothe_type, obj):
    result = []
    target_avg = obj.price / obj.quantity

    for item in clothes_list:
        if item.size == size and item.clothe_type == clothe_type:
            if (item.price / item.quantity) > target_avg:
                result.append(item)
    return result


            
                      
                
                