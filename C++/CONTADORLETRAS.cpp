#include <iostream>

using namespace std;

int main(){
	char x[/*inserte numero aqui*/];
	int y=0;
	cout<<"Escribe lo que quieras \n";
	cin.getline(x,100);
	for(int i=0;i<=99;i++){
	switch(x[i]){
		case 'a': y++;
		break;
		case 'b': y++;
		break;
		case 'c': y++;
		break;
	    case 'd': y++;
		break;	
		case 'e': y++;
		break;
		case 'f': y++;
		break;
		case 'g': y++;
		break;
		case 'h': y++;
		break;
		case 'i': y++;
		break;
		case 'j': y++;
		break;
		case 'k': y++;
		break;
		case 'l': y++;
		break;
		case 'm': y++;
		break;
		case 'n': y++;
		break;
		case 'o': y++;
		break;
		case 'p': y++;
		break;
		case 'q': y++;
		break;
		case 'r': y++;
		break;
		case 's': y++;
		break;
		case 't': y++;
		break;
		case 'u': y++;
		break;
		case 'v': y++;
		break;
		case 'w': y++;
		break;
		case 'x': y++;
		break;
		case 'y': y++;
		break;
		case 'z': y++;
		break;
	}			
	}
	cout<<"Numero de palabras: "<<y;
	return 0;	
}