glasni = "aeiouAEIOUаеиуъ"
f1 = open("MySecondFile", 'w+')
f1.write("This is first row\n")
f1.write("Isabel wrote a long letter \n")
f1.write("Birds sing early in the morning \n")
f1.seek(0)
lines = f1.readlines()
f1.close()

for line in lines:
    print(line)


f2 = open("MySecondFile2", 'w+')
for line in lines:
    words = line.split()
    vowels_words = [w for w in words if w[0] in glasni]
    for w in words:
        if w[0] in glasni:
            f2.write(f"{w} \n")
        
           
            
f2.seek(0)
print(f2.read())    
f2.close()


