print("Si no tienes un dato, dejalo en blanco")
print("Dame tu cateto 'a'")
a = input()
print("Dame tu cateto 'b'")
b=input()
print("Dame tu hipotenusa")
c=input()
if(not c):
    c=(int(a)*int(a))+(int(b)*int(b))
    c=pow(c,0.5)
    if(int(a)+int(b)<int(c)):
        print("Tu triangulo esta bien raro chamaco")
    else:
        print("Tu hipotenusa es igual a: " + str(c))
elif(not a):
    a=(int(c)*int(c))-(int(b)*int(b))
    a=pow(a,0.5)
    if(int(a)+int(b)<int(c)):
        print("Tu triangulo esta bien raro chamaco")
    else:
        print("Tu cateto 'a' es igual a: "+str(a))
elif(not b):
    b=(int(c)*int(c))-(int(a)*int(a))
    b=pow(b,0.5)
    if(int(a)+int(b)<int(c)):
        print("Tu triangulo esta bien raro chamaco")
    else:
        print("Tu cateto 'b' es igual a: " +str(c))
