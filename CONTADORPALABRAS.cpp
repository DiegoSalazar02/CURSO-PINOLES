#include <iostream>

using namespace std;

int main(){
	char x[100];
	int a=0;
	cout<<"Dime lo que quieras \n";
	cin.getline(x,100);
	for(int i=0;i<=99;i++){
		switch(x[i]){
			case ' ': a++;
			break;	
		}	
	}
	cout<<"No. de palabras: "<<a;
	return 0;
}