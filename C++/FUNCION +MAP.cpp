#include <iostream>

using namespace std;
float x1, x2, y1, y2, nu;
float map(float x1, float x2, float y1, float y2, float nu){
			nu=(nu-x1)*(y2-y1)/(x2-x1)+y1;
	return nu;
}
int main(){
		cout<<"Dame la entrada minima \n";
		cin>>x1;
		cout<<"Dame la entrada maxima \n";
		cin>>x2;
		cout<<"Dame la salida minima \n";
		cin>>y1;
		cout<<"Dame la salida maxima \n";
		cin>>y2;
		cout<<"Dime tu entrada \n";
		cin>>nu;
		nu=map(x1, x2, y1, y2,nu);
		cout<<"Tu salida es :"<<nu;
	return 0;
}