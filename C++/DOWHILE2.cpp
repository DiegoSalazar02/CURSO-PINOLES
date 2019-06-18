#include <iostream>

using namespace std;

int main(){
	int x;
	cout<<"Dame un número \n";
	cin>>x;
	int z=x;
	do{
		z--;
		x=x*z;
	}
    while(z>=2);
cout<<x;
return 0;
}