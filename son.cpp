#include <iostream>
using namespace std;
int main(){
	int son;
	cout<<"Raqam kiriting: ";
	cin>>son;
	if(son>10){
		cout<<son+3;
		
	}else if(son<10){
		cout<<son*2;
	}else{
		cout<<"teng";
	}
}