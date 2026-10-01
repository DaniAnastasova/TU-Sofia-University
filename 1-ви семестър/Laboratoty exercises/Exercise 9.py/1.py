f = open("firstExerciseFile", "w")
f.write("Fisrt string \n")
f.write("Second string \n")
f.write("Third string \n")
lst1 = [1,2,4,5,6]
lst2 = [3,6,7,2,5]
for l in lst1:
    f.write(f'{str(l)}\n')
    
for l in lst2:
   f.write(f'{str(l)} \n')
   
f.close()

f = open("firstExerciseFile", "r")
print(f.read())



