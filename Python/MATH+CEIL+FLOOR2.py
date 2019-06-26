import math 
a=int(input())
if(a==0):
    print('1')
else:
    a=math.log10(a)
    a=math.floor(a)
    a+=1
    print(a)