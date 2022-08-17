#include <iostream>
using namespace std;
int main(){
	cout<<"1=>Qushish, 2=>Ayirish, 3=>Kupaytirish, 4=>Bulish"<<endl;
	int step;
	cin>>step;
	switch(step){
		case 1:
			int a, b;
			cout<<"Son kriting: "<<endl;
			cin>>a;
			cout<<"Son kiriting: "<<endl;
			cin>>b;
			cout<<"Javob: "<<a+b;
			break;
		case 2:
		    int e, f;
			cout<<"Son kiriing: "<<endl;
			cin>>e;
			cout<<"Son kiriting: "<<endl;
			cin>>f;
			cout<<"Javob: "<<e-f;
			break;
		case 3:
		    int g,h;
			cout<<"Son kiriing: "<<endl;
			cin>>g;
			cout<<"Son kiriting: "<<endl;
			cin>>h;
			cout<<"Javob: "<<g*h;
			break;
		case 4:
			int i,j;
			cout<<"Son kiriing: "<<endl;
			cin>>i;
			cout<<"Son kiriting: "<<endl;
			cin>>j;
			cout<<"Javob: "<<i/j;
			break;
		default:
			cout<<"Bizda bunday amal yuq";
			break;		
		
	}
}