def Func(dict1: dict):
    maxvalue = 0
    maxname = " "

    for name, value in dict1.items():
        if value > maxvalue:
            maxvalue = value
            maxname = name

    return maxname
        
    
d = {"diamond":123, "rubin":538,"imdn": 2, "ijeduh":110}
print(Func(d))