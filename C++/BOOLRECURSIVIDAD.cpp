#include <iostream>
#include <cctype>

using namespace std;

bool w;

bool SiNo(char a){
	cin>>a;
	char a1;
	a1=a;
	if(tolower(a)=='s' || tolower(a)=='y'){
		return true;
	}
	else if(tolower(a)=='n' ){
	 	return false;
	}
	else{
		SiNo(a1);
	}
}


int main(){
	char x;
	cout<<"Dime si o no :v \n";
	w=SiNo(x);
	cout<<w;
	return 0;	
}