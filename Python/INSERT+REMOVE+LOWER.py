x=[]
print("Dime 5 colores")
#Pide palabras
for i in range(5):
    aux=input()
    x.append(aux)
print("Los colorcitos son of shit: \n")
print(x)
print("\n")
#Recorre palabras
for j in range(len(x)):
    aux2 = x[j]
    #Recorre letras
    for k in range(len(aux2)):
        if(aux2[k].lower() == 'a'):
            x.remove(x[j])
            x.insert(j,'')
            break
print("Los colorcitos sin 'a' son of shit: \n")
print(x)