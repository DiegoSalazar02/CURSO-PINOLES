#include <iostream>
#include <ctype.h>
#include <cctype> //tolower & toupper de minusculas a mayusculas y viceversa 

using namespace std;

int main(){
cout<<"Escribe lo que quieras \n";
int v=0;
int a;
int b=1;
int y=0;
string x;
getline(cin,x);
a=x.length();
for(int i=0;i<=a;i++){
	if (isalpha(x[i])){
		y++;
	}
	if (x[i]==' ' && isalpha(x[i+1])){
		b++;
		}
	if(tolower(x[i])=='a'||tolower (x[i])=='e'||tolower (x[i])=='i'||tolower (x[i])=='o'||tolower (x[i])=='u'){
		v++;
	}	
}
cout<<"No. de letras: "<<y<<"\n";
cout<<"No. de palabras: "<<b<<"\n";
cout<<"No. de vocales: "<<v;
return 0;
}