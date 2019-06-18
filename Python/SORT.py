print("Dame 5 frutas:")
x = []
for i in range(5):
    aux=input()
    x.append(aux)
x.sort()
print("Tus frutas son: ")
for i in range(5):
    print(x[i])