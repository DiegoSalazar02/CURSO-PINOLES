#include <iostream>

using namespace std;

int main(){
	int x;
		do{
			cout<<"Elige un numero del 1 al 8 o se te aprieta \n";
			cin>>x;
	}
	while(x<1 || x>8);
	switch(x){
	case 1:
		cout<<"escogiste el 1";
		break;
	case 2:
		cout<<"escogiste el 2";
		break;
	case 3:
		cout<<"escogiste el 3";
		break;
	case 4:
		cout<<"escogiste el 4";
		break;
	case 5:
		cout<<"escogiste el 5";
		break;
	case 6:
		cout<<"escogiste el 6";
		break;
	case 7:
		cout<<"escogiste el 7";
		break;
	case 8:
		cout<<"escogiste el 8";
		break;
	}
	/*
	if(x==1){
		cout<<"escogiste el 1";
	}
	else if(x==2){
		cout<<"escogiste el 2";
	}
	else if(x==3){
		cout<<"escogiste el 3";
	}
	else if(x==4){
		cout<<"escogiste el 4";
	}
	else if(x==5){
		cout<<"escogiste el 5";
	}
	else if(x==6){
		cout<<"escogiste el 6";
	}
	else if(x==7){
		cout<<"escogiste el 7";
	}
	else if(x==8){
		cout<<"escogiste el 8";
	}
		
	else {
		cout<<"Del 1 al 8 pendejo :v";
	}
	*/
	return 0;
}
	
		
				
		
		
	