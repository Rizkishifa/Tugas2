#include <iostream>
using namespace std;
int main ()
{
	int kasus;

	cout<<"Identifikasi Kasus Covid di Suatu Kelurahan"<<endl;
	cout<<"1 (Terdapat kasus positif covid-19 di survei pertama dan meningkat di survei kedua,diiringi dengan adanya kasus kematian akibat covid-19 dan terdapat ODP)"<<endl;
	cout<<"2 (Terdapat kasus positif covid-19 di survei pertama dan meningkat di survei kedua,tidak diiringi dengan kasus kematian namun terdapat ODP)"<<endl;
	cout<<"3 (Pada survei pertama dan kedua tidak terdapat kasus positif,tidak diiringi dengan adanya kematian, namun terdapat ODP)"<<endl;
	cout<<"4 (Pada survei pertama dan kedua tidak terdapat kasus positif,tidak diiringi dengan kasus kematian dan tidak terdapat ODP)"<<endl;
	cout<<endl;
	
	cout<<"Masukkan kasus	: ";
	cin>> kasus;
	cout<<endl;
	
	switch (kasus){
		case 1 :
			cout<<"Daerah ini terklasifikasi : Zona hitam"<<endl;
			break;
		case 2 :
			cout<<"Daerah ini terklasifikasi : Zona merah"<<endl;
			break;
		case 3 :
			cout<<"Daerah ini terklasifikasi : Zona orang"<<endl;
	 		break;
		case 4 :
			cout<<"Daerah ini terklasifikasi : Zona hijau"<<endl;
			break;
		}
	
return 0;
		
}
