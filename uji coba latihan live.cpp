#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	char nama [100],jurusan [50];
	int NIM,nilai;
	
	cout<<"===============================================================\n";
	cout<<"==      PROGRAM MENGANALISA NILAI LULUS DAN TIDAK LULUS      ==\n";
	cout<<"===============================================================\n";
	cout<<"===============================================================\n";
	cout<<" Masukkan Nama Anda : ";
	cin>>nama;
	cout<<" Masukkan NIM Anda : ";
	cin>>NIM;
	cout<<" Masukkan Jurusan Anda : ";
	cin>>jurusan;
	cout<<" Masukkan Nilai Anda : ";
	cin>>nilai;
	cout<<endl;
	cout<<"================================================================\n";
	
	
	if (nilai >=81){
		cout<<" Nilai Mutu A ";
		cout<<" LULUS ";
	}
	else if (nilai <=80 && nilai >=66){
		cout<<" Nilai Mutu B ";
		cout<<" LULUS ";
	}
	else if (nilai <=65 && nilai >=55){
		cout<<" Nilai Mutu C ";
		cout<<" LULUS ";
	}
	else if (nilai <=54 && nilai >=45){
		cout<<" Nilai Mutu D ";
		cout<<" TIDAK LULUS ";
	}
	else if (nilai <=44){
		cout<<" Nilai Mutu E ";
		cout<<" TIDAK LULUS ";
	}
	else
	{
		cout<<" NILAI YANG ANDA MASUKKAN SALAH "<<endl;
	}
	cout<<"\n=====================================================\n";
	cout<<"==                   TERIMAKASIH                       ==";
	cout<<"\n=====================================================\n";
	return 0;
	
}
