import time
print("Dame el numero de minutos que quieres")
y=int(input())
y=y*60
print("Dame el numero de segundos que quieres")
x=int(input())
x=x+y
print("Corre tiempo")
z='nada'
time.sleep(x)
while(z!='apagar'):
    time.sleep(0.5)
    if(z!='apagar'):
        print("Se acabó el tiempo")
        z=input()