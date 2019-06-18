#include <iostream>

using namespace std;

int x, y, z, w;
void caluculadora(int a, int b, int c){
	int w=a;
	switch(c){
		case 1: 
			a=a+b;
			cout<<a;
			break;
		case 2:
			a=a-b;
			cout<<a;
			break;
		case 3:
			a=a*b;
			cout<<a;
			break;
		case 4:
			if(b==0){
				cout<<"No se puede \n";
			}
			else{
			a=a/b;
			cout<<a;
			}
			break;
		case 5:
			if(b==0){
				cout<<'1';
			}
			else{
			for(int i=0;i<b;i++){
				a=a*w;
			}
			cout<<a;
			}
			break;
	}
}

int main(){	
	cout<<"Dame un numero \n";
	cin>>x;
	cout<<"Dame otro numero \n";
	cin>>y;
	cout<<"1:suma \n 2:resta \n 3:multiplicacion \n 4:division \n 5:exponencial \n";
	cin>>z;
caluculadora(x,y,z);
return 0;		
}


/*A la hora de que la funcion "void" no regresa ningun valor, en el proceso principal, 'x','y' y 'z'
adquieren el valor de la RAM, por lo cual podemos hacer nuevas variables e igualarlas a 'x','y' y 'z'*/
 