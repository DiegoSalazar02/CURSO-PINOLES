#include <iostream>

using namespace std;

int main(){
	cout<<"Dame 10 numeros \n";
	int x[10];
	int sumamesta;
	for(int i=0;i<=9;i++){
		cin>>x[i];
	}
	sumamesta= x[0] + x[1] + x[2] + x[3] + x[4] + x[5] + x[6] +x[7]+x[8]+x[9];
	cout<<sumamesta;
	return 0;
}