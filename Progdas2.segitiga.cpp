/* Program Menghitung Segitiga */
/* Nama : Novita Nurul Hidayati */
/* NIM : 20051397001 */
#include<iostream>
#include<math.h>
using namespace std;
main()
{
	char kode;
	float a, t, m1, m, l, k;
	cout<<"========================================="<<endl;
	cout<<"Nama          : Novita Nurul Hidayati"<<endl;
	cout<<"NIM           : 20051397001"<<endl;
	cout<<"Program Studi : D4 Manajemen Informatika"<<endl;
	cout<<"Kelas         : 2020A"<<endl;
	cout<<"========================================="<<endl;
	cout<<endl;
	cout<<"MENU SEGITIGA SIKU-SIKU"<<endl;
	cout<<"1. Mencari Panjang Sisi Miring"<<endl;
	cout<<"2. Mencari Luas"<<endl;
	cout<<"3. Mencari Keliling"<<endl;
	cout<<"4. Keluar Program"<<endl;
	cout<<"Pilih :"<<endl;cin>>kode;
	switch (kode)
	{
		case '1' :
		case 'a' :
			cout<<"Mencari Panjang Sisi Miring";
			cout<<"\nMasukkan Panjang Alas : ";cin>>a;
			cout<<"\nMasukkan Tinggi : ";cin>>t;
			m1 = (a*a)+(t*t);
			m = sqrt (m1);
			cout<<"Panjang Sisi Miring adalah " <<m<<endl;
			break;
		case '2' :
		case 'b' :
			cout<<"Mencari Luas";
			cout<<"\nMasukkan Alas : ";cin>>a;
			cout<<"\nMasukkan Tinggi : ";cin>>t;
			l = 0.5*a*t;
			cout<<"Luas adalah " <<l<<endl;
			break;
		case '3' :
		case 'c' :
			cout<<"Mencari Keliling";
			cout<<"\nMasukkan Alas : ";cin>>a;
			cout<<"\nMasukkan Tinggi : ";cin>>t;
			cout<<"\nMasukkan Sisi Miring : ";cin>>m;
			k = a+t+m;
			cout<<"Keliling adalah " <<k;
			break;
		case '4' :
		case 'd' :
			cout<<"Keluar Program";
			break;
		default:;
	}
}
