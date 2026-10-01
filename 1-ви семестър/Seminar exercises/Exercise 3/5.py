def Func(a,h,r):
    diagonal = 0
    diagonal = a * a + h * h
    diametar = 2 * r
    if (diagonal < diametar**2):
        return True
    else:
        return False
    

print(Func(5,1,3))
    
    