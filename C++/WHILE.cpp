#include <iostream>

using namespace std;

int main(){
	int x;
	cout<<"Dame un numero \n";
	cin>>x;
	int z=x;
	while(z>1){
		z=z-1;
		x=x*z;
	}
	cout<<x;
	return 0;
	
}