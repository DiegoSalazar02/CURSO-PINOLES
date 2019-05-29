#include <iostream>

using namespace std;

int x,y,z;
void caluculadora(int x, int y, int z){
	int a;
	cout<<"Dame un numero \n";
	cin>>x;
	x=a;
	cout<<"Dame otro numero \n";
	cin>>y;
	cout<<"1:suma \n 2:resta \n 3:multiplicacion \n 4:division \n 5:exponencial \n";
	cin>>z;
	switch(z){
		case 1: 
			x=x+y;
			cout<<x;
			break;
		case 2:
			x=x-y;
			cout<<x;
			break;
		case 3:
			x=x*y;
			cout<<x;
			break;
		case 4:
			if(y==0){
				cout<<"No se puede \n";
			}
			else{
			x=x/y;
			cout<<x;
			}
			break;
		case 5:
			for(int i=0;i<=y;i++){
				x=x*a;
			}
			cout<<x;
			break;
	}
	/*if(z==1){
		x=x+y;
	}
	else if(z==2){
		x=x-y;
	}
	else if(z==3){
		x=x*y;
	}				
 	else if(z==4){
 		if(y=0){
			 cout<<"No se poji \n";
		 }
		else{
			x=x/y;
		} 
	 
	 }
	 else if (z==5){
		 for(int i=1;i<=y;i++)
		 	x=a*x;
	 }*/
}

int main(){
caluculadora(x,y,z);	
return 0;		
}