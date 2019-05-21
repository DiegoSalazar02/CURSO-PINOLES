#include <iostream>

using namespace std;

int main (){
	float x;
	float y; 
	cout<< "Dame un numero: \n"; 
	cin>> x;
	cout<< "Dame otro numero: \n ";
	cin>> y;
	cout<<"Suma: "<<x+y<<"\n";
	cout<<"Resta: "<<x-y<<"\n";
	cout<<"Multiplicacion: "<<x*y<<"\n";
	if(y==0){
		cout<<"Division: no se poji ";
	}
	else{
		cout<<"Division: "<<x/y<<"\n ";
	}
	return 0; 
}