#include <iostream>

using namespace std;

int main(){
	string x;
	string x1;
	string x2;
	string x3;
	int y;
	int z;
	cout<<"Dime tu primer nombre \n";
	getline(cin,x);
	cout<<"Dime tu primer apellido \n";
	getline(cin,x1);
	cout<<"Dime tu segundo apellido \n";
	getline(cin,x2);
	cout<<"Dime tu sexo \n";
	getline (cin,x3);
	cout<<"Dime tu edad \n";
	cin>>y;
	cout<<"Dime tu numero de telefono \n";
	cin>>z;
	
	cout<<"Tu nombre es "<<x<<" "<<x1<<" "<<x2<<", eres "<<x3<<", tu edad es "<<y<<" y tu numero de telefono es "<<z;
	return 0;
		
}