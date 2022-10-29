#include <iostream>
//code by Molestum314 {Dimas M Rizki}
using namespace std;
int main()
{
	int j,m, Hasil ;
	
	cout <<"=====================================================================" <<endl;
	cout <<"===== MENGUBAH JAM DAN MENIT YANG DIINPUT KE DALAM SATUAN DETIK =====" <<endl;
	cout <<"=====================================================================" <<endl;
	cout <<endl;
	
	//Input Hour
	cout <<"Masukkan jam   : ";
	cin>>j;
	
	//Input Minute
	cout <<"Masukkan menit : ";
	cin>>m;
	
	//formula
	Hasil = (j*3600)+(m*60);
	
	//output
	cout <<"---------------------------------------------------------------------" <<endl;
	cout <<"Jumlah Waktu   : " <<Hasil; 
	
	//second
	cout<<" Detik" <<endl;
	
	return 0;
}
