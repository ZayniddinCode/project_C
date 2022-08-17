#include <iostream>
using namespace std;
int main(){
	int step=1;
	while(step!=0){
		cout<<"0=>Chiqish: 1=>O'zbekiston: 2=>Russia: "<<endl;
		cin>>step;
		switch(step){
			case 1:
				cout<<"O'zbekiston: "<<endl;
				cout<<"Vilyatni tanlang: "<<endl;
				cout<<"1=>Toshkent : 2=>Andijon: 3=>Namangan: 4=>Farg'ona: 5=>Sirdaryo: 6=>Jizzax: 7=>Samarqand: 8=>Buxoro: 9=>Navoiy: 10=>Qashqadaryo: 11=>Surxondaryo: 12=>Xorazim: "<<endl;
				int viloyat;
				cin>>viloyat;
				switch(viloyat){
					break;
					case 1:
						cout<<"Toshkent: "<<endl;
						break;
					case 2:
						cout<<"Andijon: "<<endl;
						break;
					case 3:
					    cout<<"Namangan: "<<endl;
					    break;
					case 4:
					    cout<<"Farg'ona: "<<endl;
						break;
					case 5:
						cout<<"Sirdaryo:"<<endl;
						break;
					case 6:
						cout<<"Jizzax: "<<endl;
						break;   
					case 7:
					    cout<<"Samarqand: "<<endl;
					    break;
					case 8:
					    cout<<"Buxoro: "<<endl;
					    break;    
					case 9:
					    cout<<"Navoiy: "<<endl;
					    break;    
					case 10:
					    cout<<"Qashqadaryo: "<<endl;
					    break;    		
					case 11:
					    cout<<"Surxondaryo: "<<endl;
					    break;    			
					case 12:
					    cout<<"Xorazim: "<<endl;
					    break;    			
				}
				break;
			case 2:
				cout<<"Russia: "<<endl;
				cout<<"Viloyatni tanlang: "<<endl;
				cout<<"1=>Amur: 2=>Arhangel: 3=>Astrahan: 4=>Belgorod: 5=>Bryansk: 6=>Chelyabinskiy: 7=>Chita: 8=>Irkutsk: 9=>Ivanovskaya: 10=>Kaliningrad: 11=>Kaluja: 12=>Kemerov: 13=>Kirov: 14=>Kostrom: 15=>Kurgan: 16=>Kursk: 17=>Leningrad: 18=>Lipetsk: 19=>Magadan: 20=>Moskva: 21=>Muramansk: 22=>Nijegorod: 23=>Novogorot: 24=>Novosibirsk: 25=>Omsk: 26=>Orenburg: 27=>Orlov: 28=>Penza: 29=>Pskov: 30=>Rostov: 31=>Ryazan: 32=>Saxalin: 33=>Samara: 34=>Sratov: 35=>Smolensk: 36=>Sverdlovsk: 37=>Tambov: 38=>Tomsk: 39=>Tver: 40=>Tula: 41=>Tyumen: 42=>Ulyanov: 43=>Vladimer: 44=>Vlogograd: 45=>Vologodsk: 46=>Voronej: 47=>Yaroslav: "<<endl;
				int region;
				 cin>>region;
				 switch(region){
				 	break;
				 	case 1:
				 		cout<<"Amur: "<<endl;
				 		break;
				 	case 2:
					 	cout<<"Arhangel: "<<endl;
				 		break;	
				 	case 3:
					 	cout<<"Astrahan: "<<endl;
				 		break;
					case 4:
					 	cout<<"Belgorod: "<<endl;
				 		break;
					case 5:
					 	cout<<"Bryansk: "<<endl;
				 		break;			 		 			 		
				    case 6:
					 	cout<<"Chelyabinskiy: "<<endl;
				 		break;			 
				    case 7:
					 	cout<<"Chita: "<<endl;
				 		break;			 
				    case 8:
					 	cout<<"Irkutsk: "<<endl;
				 		break;			 
				    case 9:
					 	cout<<"Ivanovskaya: "<<endl;
				 		break;		
				    case 10:
					 	cout<<"Kaliningrad: "<<endl;
				 		break;		
				    case 11:
					 	cout<<"Kaluja: "<<endl;
				 		break;		
				    case 12:
					 	cout<<"Kemerov: "<<endl;
				 		break;		
				    case 13:
					 	cout<<"Kirov: "<<endl;
				 		break;		
				    case 14:
					 	cout<<"Kostrom: "<<endl;
				 		break;		
				    case 15:
					 	cout<<"Kurgan: "<<endl;
				 		break;		
				    case 16:
					 	cout<<"Kursk: "<<endl;
				 		break;		
				    case 17:
					 	cout<<"Leningrad: "<<endl;
				 		break;		
				    case 18:
					 	cout<<"Lipetsk: "<<endl;
				 		break;		
				    case 19:
					 	cout<<"Magadan: "<<endl;
				 		break;		
				    case 20:
					 	cout<<"Moskva: "<<endl;
				 		break;		
				    case 21:
					 	cout<<"Muramansk: "<<endl;
				 		break;		
				    case 22:
					 	cout<<"Nijegorod: "<<endl;
				 		break;		
				    case 23:
					 	cout<<"Novogorot: "<<endl;
				 		break;		
				    case 24:
					 	cout<<"Novosibirsk: "<<endl;
				 		break;		
				    case 25:
					 	cout<<"Omsk: "<<endl;
				 		break;		
				    case 26:
					 	cout<<"Orenburg: "<<endl;
				 		break;		
				    case 27:
					 	cout<<"Orlov: "<<endl;
				 		break;		
				    case 28:
					 	cout<<"Penza: "<<endl;
				 		break;		
				    case 29:
					 	cout<<"Pskov: "<<endl;
				 		break;		
				    case 30:
					 	cout<<"Rostov: "<<endl;
				 		break;		
				    case 31:
					 	cout<<"Ryazan: "<<endl;
				 		break;		
				    case 32:
					 	cout<<"Saxalin: "<<endl;
				 		break;		
				    case 33:
					 	cout<<"Samara: "<<endl;
				 		break;		
				    case 34:
					 	cout<<"Sratov: "<<endl;
				 		break;		
				    case 35:
					 	cout<<"Smolensk: "<<endl;
				 		break;		
				    case 36:
					 	cout<<"Sverdlovsk: "<<endl;
				 		break;		
				    case 37:
					 	cout<<"Tambov: "<<endl;
				 		break;		
				    case 38:
					 	cout<<"Tomsk: "<<endl;
				 		break;		
				    case 39:
					 	cout<<"Tver: "<<endl;
				 		break;		
				    case 40:
					 	cout<<"Tula: "<<endl;
				 		break;		
				    case 41:
					 	cout<<"Tyumen: "<<endl;
				 		break;		
				    case 42:
					 	cout<<"Ulyanov: "<<endl;
				 		break;		
				    case 43:
					 	cout<<"Vladimer: "<<endl;
				 		break;		
				    case 44:
					 	cout<<"Vlogograd: "<<endl;
				 		break;		
				    case 45:
					 	cout<<"Vologodsk: "<<endl;
				 		break;		
				    case 46:
					 	cout<<"Voronej: "<<endl;
				 		break;		
				    case 47:
					 	cout<<"Yaroslav: "<<endl;
				 		break;		
				   }
				break;
			default:
				cout<<"Siz saytdan chiqdingiz: "<<endl;
				break;
			
			
		}
		
	}
}