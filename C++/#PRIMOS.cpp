#include <iostream>

using namespace std;

int main(){
	int cont=0;
	cout<<"2"<<"\n";
	cout<<"3"<<"\n";
	cout<<"5"<<"\n";
	cout<<"7"<<"\n";
	for(int i=0;i<=100;i++){
     if(i!=1)
		if(i%2 !=0){
			if (i%3 !=0){
				if(i%5 !=0){
					if(i%7 !=0){
						cout<<i<<"\n";
					}
				}
			}
	  	  }	
	  	  else{
			 cout<<"";
		 } 
	}
	return 0;
}

