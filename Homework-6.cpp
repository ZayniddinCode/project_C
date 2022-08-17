#include <iostream>
#include <ctime>
#include <cctype>
#include<regex>
using namespace std;
int main(){
string name, surname;
int parol;
ism:
	
cout<<"Ismingizni kiriting: "<<endl;
cin>>name;
if(name.empty()==1){
	cout<<"Ism kiritilmagan!!!";
	goto ism;
}
familya:
cout<<"Familyangizni kiriting: "<<endl;
cin>>surname;
if(surname.empty()==1){
	cout<<"Familya kiritilmagan!!!";
	goto familya;
}
cout<<surname.empty()<<endl;
string gmail1, gmail2;
ortga1:
cout<<"Email pochtangizni kiriting: "<<endl;
cin>>gmail1;
if(regex_match(gmail1,regex("(.*)@gmail.com"))==0){
	cout<<"Email xato.Iltimos qaytadan kiriting"<<endl;
	goto ortga1;
}else if(gmail1.length()<11){
		cout<<"Email xato.Iltimos qaytadan kiriting"<<endl;
	goto ortga1;
}
//regex_match(gmail1, regex("(.*)@gmail.com"));
//cout<<"Emailni tastiqlang: "<<endl;
//cin>>gmail2;
//if(gmail1<=gmail2){
//	cout<<"Ma'lumot saqlandi: "<<endl;
//
//}else if(gmail1>=gmail2){
//	cout<<"Xato email: "<<endl;
//	goto ortga1;
//}

int year;
int years;
cout<<"Tug'ulgan yilingizni kiriting: "<<endl;
cin>>year;
year-years;
if(year<=2022-19){
	cout<<"Yoshingiz yetarli: "<<endl;
	
}else{
	cout<<"Yoshingiz yetarli emas: "<<endl;
}



string phoneNamber , telRaqam;
int namber;
raqam:
cout<<"Telifon raqamingizni kiriting: "<<endl;
cin>>phoneNamber;
if(phoneNamber.length()!=13){
	cout<<"Raqam xato "<<endl;
	goto raqam;
}

//if(phoneNamber<=phoneNamber){
//	cout<<"Telifon raqamingiz tug'ri: "<<endl;
//	
//}else{
//	cout<<"Telifon raqamingiz notug'ri: "<<endl;
//}



string code;
srand(time(nullptr));
int abb=rand();
ortga2:
cout<<" Parol: ";
cout<<abb<<endl;
cout<<"Parolni qayta kiriting:";
cin>>parol;
if(parol!=abb){
	cout<<"Kiritilgan parol xato.Iltimos qaytadan kiriting!!!"<<endl;
	goto ortga2;
}
cout<<"Siz saytga kirdingiz: "<<endl;	



}