#include <iostream>
using namespace std;
int main (){
	cout<<"Tel e'lon.com ga xush kalibsiz"<<endl;
	cout<<"Telefoningizga e'lon bering"<<endl;
	string kompaniyName,telModel,color,region,citiy,phoneNamber;
	short simCard,batareya,version,ram,year,memoriy;
	int dyuym,price,pixel;
	bool kurinish,dakument;
	cout<<"Telefonning kompaniya nomini kiriting:";
	cin>>kompaniyName;
	cout<<"Telefonning modelini kiriting:";
	cin>>telModel;
	cout<<"Telefonning rangini kiriting:";
	cin>>color;
	cout<<"Telefonga nechta simkarta ketishini kiriing: ";
	cin>>simCard;
	cout<<"Telefon kamerasining pixelni kiriting: ";
	cin>>pixel;
	cout<<"Telefon hotira sig'imini kiriting: ";
	cin>>memoriy;
	cout<<"Telefon batareyasi necha soatgacha quvvat srflashini kiriting: ";
	cin>>batareya;
	cout<<"Telfon ekraning dyuymini kiriting: ";
	cin>>dyuym;
	cout<<"Telefon versiyasini kiriting: ";
	cin>>version;
	cout<<"Telefon ramini kiriting: ";
	cin>>ram;
	cout<<"Telfonning kurinishi yaxshimi??? ";
	cin>>kurinish;
	cout<<"Telefon ishlab chiqarilgan yilini kiriting: ";
	cin>>year;
	cout<<"Telifon dakument karopkami: ";
	cin>>dakument;
	cout<<"Telefon narxini kiriting: ";
	cin>>price;
	cout<<"Viloyatni kiriting:";
	cin>>region;
	cout<<"Shaharni kiriting:";
	cin>>citiy;
	cout<<"Murojaat uchun tel raqam kiriting:";
	cin>>phoneNamber;
	cout<<kompaniyName<<" "<<telModel<<endl;
	cout<<"Rangi   "<<color<<endl;
	cout<<"Simkarta  "<<simCard<<endl;
	cout<<"Pixel  "<<pixel<<endl;
	cout<<"Hotira  "<<memoriy<<endl;
	cout<<"Batareya  "<<batareya<<"soat"<<endl;
	cout<<"Ekaran dyuyimi   "<<dyuym<<endl;
	cout<<"Versiyasi   "<<version<<endl;
	cout<<"Ram   "<<ram<<endl;
	cout<<"Kurinishi  "<<kurinish<<endl;
	cout<<"Yil   "<<year<<endl;
	cout<<"Dakument karpka   "<<dakument<<endl;
	cout<<"Narxi   "<<price<<" $"<<endl;
	cout<<"Viloyat   "<<region<<endl;
	cout<<"Shahar   "<<citiy<<endl;
	cout<<"Murojat uchun:"<<phoneNamber<<endl;
	cout<<"Bizning saytdan foydalanganingiz uchun rahmat";
	
	
}