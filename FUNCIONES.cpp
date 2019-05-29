#include <iostream>

using namespace std;

int x,y,a;
int suma2Numeros(int x, int y){
	int a;
	a=x+y;
	return a;
}

int main(){
cout<<"Dame un numero \n";	
cin>>x;
cout<<"Dame otro numero \n";
cin>>y;
suma2Numeros(x,y);	
a=suma2Numeros(x,y);
cout<<a;

return 0;	
}