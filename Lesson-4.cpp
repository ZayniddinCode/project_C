#include <iostream>
using namespace std;
int main (){
	int vazifa,bajarildi;
	cout<<"Qancha vazifa berdiz: ";
	cin>>vazifa;
	cout<<"Qachon keldi: ";
	cin>>bajarildi;
	int foiz=(bajarildi*100)/vazifa;
	if(foiz>=80){
		cout<<"A'lo"<<endl;
		
	}else if(foiz>=60&&foiz<80){
		cout<<"Yaxshi"<<endl;
	}else if(foiz>=40&&foiz<60){
	
	cout<<"Qoniqarli"<<endl;
    }else{
	cout<<"Qoniqarsiz"<<endl;
	
    }


}