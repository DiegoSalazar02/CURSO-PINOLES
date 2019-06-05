z=0
i=0
i=int(i)
z=int(z)
print("Dame un número")
x=input()
x=int(x)
z=x
print("Dame otro numero")
y=input()
y=int(y)
print("1: Suma 2:Resta 3:Multiplicación 4:División 5:exponencial")
w=input()
w=int(w)
if(w==1):
    x=x+y
    print(x)
elif(w==2):
    x=x-y
    print(x)
elif(w==3):
    x=x*y
    print(x)
elif(w==4):
    if (y==0):
        print("No se poji")
    else:
        x=x/y
elif(w==5):
    for int(i) in int(y):
        x=x*z
    print(x)