a=open("nada.txt","w")
a.write('')
a.write("Nombre:\n\nApellido:\n\nEdad:\n\n")
a.close()
print("Dime tu nombre: ")
nombre=input()
print("Dime tu apellido: ")
apellido=input()
print("Dime tu edad: ")
edad=input()

a=open("nada.txt","r+")
m = a.readlines()

for i,linea in enumerate(m):
    if(linea=="Nombre:\n"):
        m.insert(i+1,nombre)
    elif(linea=="Apellido:\n"):
        m.insert(i+1,apellido)
    elif(linea=="Edad:\n"):
        m.insert(i+1,edad)
a.seek(0)
a.writelines(m)

print("Ya se ha llenado el formulario, gracias.")
print("¿Deseas hacer otro formulario?")
x=[]
x = input()
y=x[0]
a.write("\n")
    
while(y.lower()!='n'):
    
    print("Dime tu nombre: ")
    nombre1=input()
    print("Dime tu apellido: ")
    apellido1=input()
    print("Dime tu edad: ")
    edad1=input()

    l = a.readlines()

    for i,linea in enumerate(l):
        if(linea=="Nombre:\n"):
            l.insert(i+1,nombre1)
        elif(linea=="Apellido:\n"):
            l.insert(i+1,apellido1)
        elif(linea=="Edad:\n"):
            l.insert(i+1,edad1)
    a.writelines(l)
    print("¿Deseas hacer otro formulario?")
    x=input()
a.close()