import time
print("Presiona enter")
input()
for i in range (60):
    for j in range (60):
        print("Minutos: " + str(i) + " Segundos: " + str(j))
        time.sleep(1)