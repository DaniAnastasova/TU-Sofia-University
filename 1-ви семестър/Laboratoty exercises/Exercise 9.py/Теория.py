# 1-ва стъпка
# За отваряне на файл използваме команда open. 

# 2-ра стъпка
# Резултатът е файлов обект. Функция open(<очаква име на файла>, <режим на достъп на файла>)
# Видове режими на достъп на файла - "r" - read, "w" - запис,"a"- добавяне, "rb", "wb", "ab" - Тези са в бинарен вид.
# Ако отворим файл в режим "w"и "a", който файл не съществува, то той ще се създаде.
# Ако отворим файл за четене, който не съществува, то ще хвърли грешка
# При "rb+" - Отново има грешка 
# При "wb+" - При съществуващ файл ще се изтрие съдържанието. При несъществуващ ще се създаде нов.

# 3-та стъпка 
# <файлов обект>.Close() - ще затвори файла

# .write(<string>)
# .write(<byte-string)
# .writebinus(<bstr>)

# .read(<n>) 
# .readline(<n>)
# .readlines() - 

# \n - нов ред 
# with open(.....) as <файлов обект>:

f = open("myfile.txt", "w")
f.write("First line \n")
f.write("Second line \n")
f.close()

f = open("myfile.txt", "r")
# 1 вариант - print(f.read())
# вариант 2 
for line in f:
    print(line)
f.close()

f = open("myfile.txt", "a+")
fruits = ["Apple \n", "orange \n", "Banana \n"]
f.writelines(fruits)
# print(f.read()) - Тук курсорът е накрая на файла и няма какво да принтира за четене, затова трябва да се върне в началото
# При seek(0) - Начало на файла
# При seek(1) - Текуща позиция
# При seek(2) - Края на файла
print(f.tell())
f.seek(0)
# seek - <отмества курсора>
print(f.read())
f.close()


# import json
# json.dump() - Преобразуване на Python обект в json
# dump(<python object>, <file object>)
# json.load(<file object>) - От json в python file 

# Бинарен файл
f = open("bnfile", "wb+")
text = "Hello Python"
bindata= text.encode('utf-8')
f.write(bindata)
f.seek(0)
binstr = f.read()
org = binstr.decode('utf-8')
print(org)
f.close()


# import pickle
# Има функции dump и load

