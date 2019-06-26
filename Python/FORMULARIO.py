x=open("nada.txt","w")
x.write('')
x.close
x=open("nada.txt","a+") #"a" es de append
print("Dime tu nombre ")
a=str(input())
x.write("Nombre: \n"+ a + "\n")
print("Dime tu apellido ")
b=str(input())
x.write("Apellido: \n" + b + "\n")
print("Dime tu edad ")
c=str(input())
x.write("Edad: \n" + c + "\n")
x.close()