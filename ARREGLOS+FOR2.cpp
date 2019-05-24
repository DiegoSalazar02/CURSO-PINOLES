#include <iostream>

using namespace std;

int main(){
	cout<<"Dame 10 numeros, yo los sumo \n";
	int x[10];
	int y=0;
	for(int i=0;i<=9;i++){
		cin>>x[i];
		y=y+x[i];
	}
	cout<<"La suma de los numeros es igual a:"<<y;
	return 0;
}