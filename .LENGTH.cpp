#include <iostream>

using namespace std;

int main(){
string x;
string y;
string z;
cout<<"Dime 3 frases: \n";	
getline (cin,x);
getline (cin,y);
getline (cin,z);
int a=x.length();
int b=y.length();
int c=z.length();
if(a>b && a>c){
	cout<<"La primera frase es la mas larga";
}
else if(b>a && b>c){
	cout<<"La segunda frase es la mas larga";
}
else if(c>a && c>b){
	cout<<"La tercera frase es la mas larga";
}
return 0;
}