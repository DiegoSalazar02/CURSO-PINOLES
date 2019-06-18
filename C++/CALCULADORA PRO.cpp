#include <iostream>

using namespace std;

int main(){
	int x;
	int y;
	cout<<"Dame un numero: \n";
	cin>>x;
	int z=x;
	cout<<"Dame otro numero: \n";
	cin>>y;
	int w;
	while (w<1||w>5){
	cout<<"Presiona el numero de acuerdo a lo que quieras: \n Suma:1\n Resta:2\n Multiplicacion:3\n Division:4\n Exponencial:5\n";	
	cin>>w; 
	}
	switch(w){
	case 1: 	
		x=x+y;
		break;
	case 2: 	
    	x=x-y;
    	break;
    case 3:	
    	x=x*y;
      	break;
	case 4:		
		x=x/y;
		break;
	case 5:	
		for(int i=1;i<=y-1;i++){
		x=x*z;			
		}
		break;		
	}
	cout<<x;
	return 0;
}