#include <iostream>

using namespace std;

int main(){
	int a=0;
	int y=1;
	int x=0;
	int w;
	cout<<"Dame un numero: \n";
	cin>>w;
	if(w==1){
		cout<<y;
	}
	else if(w>1){
		cout<<y<<"\n";
		for(int i=0;i<=w-2;i++){
		a=y+x;
		x=y;
		y=a;
		cout<<a<<"\n";
		}
	}
	
return 0;
}