z=0
z=int(z)
print("Dame un número")
x=int(input())
z=x
print("Dame otro numero")
y=int(input()) 
print("1: Suma 2:Resta 3:Multiplicación 4:División 5:exponencial")
w=int(input())
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
        print(x)
elif(w==5):
    for i in range(1,y):
        x=z*x
    print(x)
