a = open("nada.txt","w")
a.write('')
a.write("Nombre:\n\nApellido:\n\nEdad:\n\n")
a.close()
print("Dime tu nombre: ")
nombre= input()
print("Dime tu apellido: ")
apellido = input()
print("Dime tu edad: ")
edad = input()

a = open("nada.txt","r+")
m = a.readlines()

for x, line in enumerate(m):
    if(line == "Nombre:\n"):
        m.insert(x + 1, nombre)
    elif(line == "Apellido:\n"):
        m.insert(x + 1, apellido)
    elif(line == "Edad:\n"):
        m.insert(x + 1, edad)
a.seek(0)
a.writelines(m)
print("Ya se ha llenado el formulario, gracias hijo de toda tu reputisima madre.")
a.close()
