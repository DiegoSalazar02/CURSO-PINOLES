#include <iostream>

using namespace std;

int main(){
	int x;
	int y;
	cout<<"Dame un numero: \n";
	cin>>x;
	cout<<"Dame otro numero: \n";
	cin>>y;
	int w;
	cout<<"Presiona el numero de acuerdo a lo que quieras: \n Suma:1\n Resta:2\n Multiplicacion:3\n Division:4\n Exponencial:5\n";
	cin>>w;
	switch(w){
	case 1: 	
	x=x+y;
	cout<<x;
	break;
	case 2: 	
    x=x-y;
    cout<<x;
    break;
    case 3:	
    x=x*y;
    cout<<x;
    break;
	case 4:	
	cout<<x;	
	x=x/y;
	break;
	case 5:	
	for(int i=1;i<=y;i++){
		x=x*x;
	break;		
	}
	cout<<x;		
	}
	return 0;
	
}