#include <iostream>

using namespace std;

int main(){
	char x[30];
	int a=0; int e=0; int i=0; int o=0; int u=0;
	cout<<"Dame una frase (100 palabras maximo) \n";
	cin.getline(x,30);
	for(int i=0;i<=30;i++){
		switch (x[i]){
			case 'a': a++;
			break;	
			case 'e': e++;
			break;
			case 'i': i++;
			break;
			case 'o': o++;
			break;
			case 'u': u++;
			break;
		}
		
	}
	cout<<"Numero de letras a: "<<a<<"\n";	
	cout<<"Numero de letras e: "<<e<<"\n";	
	cout<<"Numero de letras i: "<<i<<"\n";	
	cout<<"Numero de letras o: "<<o<<"\n";	
	cout<<"Numero de letras u: "<<u<<"\n";	
	
	return 0;
	
}