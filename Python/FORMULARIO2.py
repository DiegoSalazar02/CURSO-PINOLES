a=open("nada.txt","w")
a.write('')
a.write("Nombre: \n\nApellido: \n\nEdad: \n")
a.close
a=open("nada.txt","r")
print("Dime tu nombre: ")
nombre=str(input())
print("Dime tu apellido: ")
apellido=str(input())
print("Dime tu edad: ")
edad=str(input())
m = [a.readlines()]
for i in range(len(a.readlines())):
    n=a.readline()
    print(n)
    if(n==""):
        m=a.readlines()
        m[i+1]=nombre
        print(m)
    if(n==""):
        m=a.readlines()
        m[0]=apellido
        print(m)
    if(n==""):
        m=a.readlines()
        m[0]=edad
        print(m)
a=open("nada.txt","w")
a.writelines(str(m))
print("Ya se ha llenado el formulario, gracias hijo de toda tu reputisima madre.")
a.close