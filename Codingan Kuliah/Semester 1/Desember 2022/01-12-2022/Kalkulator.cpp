#include<iostream>
#include <math.h>

//Code by Dimas Muhammad Rizki - TMD 1A

using namespace std;

void tambah (float a, float b){
	return ( a + b );
	}

float kurang (float a, float b ){
	return ( a - b );
	}

float kali (float a, float b ){
	return ( a * b );
	}

float bagi (float a, float b ){
	return (a / b );
	}
	
float pangkat (int x){
	return pow(x,2);
	}
	
float pangkat3 (int x){
	return pow(x,3);
	}

float akar (float b){
	return sqrt (b) ;
}



int main (){

string ulang;

do { system ("cls");
{
	float bil1, bil2, input, hasil;
	
	char pilihan;
	
	cout<<" ================================================"<<endl;
	cout<<" |		Program Kalkulator		|"<<endl;
	cout<<" ================================================"<<endl;
	cout<<"      - Kalkulator by Dimas Muhammad Rizki -     "<<endl;
	cout<<" ================================================"<<endl;
	cout<<" |		Masukkan Pilihan		|"<<endl;
	cout<<" ------------------------------------------------"<<endl;
	cout<<" |						|"<<endl;
	cout<<" |	(A) Tambah	     (B) Kurang		|"<<endl;
	cout<<" |	(C) Kali	     (D) Bagi		|"<<endl;
	cout<<" |	(E) Pangkat 2	     (F) Pangkat 3	|"<<endl;
	cout<<" |	(G) Akar Kuadrat			|"<<endl;
	cout<<" |						|"<<endl;
	cout<<" ================================================"<<endl;
	cout<<"\n   Masukan Pilihan : ";cin>>pilihan;
	cout<<endl;

if ( pilihan == 'A' || pilihan == 'a' ) {

	cout<<endl;
	cout<<" ================================================"<<endl;
	cout<<" |                  Penjumlahan                 |"<<endl;
	cout<<" ================================================"<<endl;

	cout<<"\n   Masukan Bilangan pertama : ";cin>>bil1;
	cout<<"   Masukan Bilangan kedua   : ";cin>>bil2;

	cout<<"\n   Hasil Dari "<<bil1<<" + "<<bil2<<" Adalah = "<<tambah(bil1,bil2)<<endl<<endl;
	cout<<" ================================================"<<endl;
}

else if ( pilihan == 'B' || pilihan == 'b' ) {	
	cout<<endl;
	cout<<" ================================================"<<endl;
	cout<<" |                  Pengurangan                 |"<<endl;
	cout<<" ================================================"<<endl;

	cout<<"\n   Masukan Bilangan pertama : ";cin>>bil1;
	cout<<"   Masukan Bilangan kedua   : ";cin>>bil2;

	cout<<"\n   Hasil Dari "<<bil1<<" - "<<bil2<<" Adalah = "<<kurang(bil1,bil2)<<endl<<endl;
	cout<<" ================================================"<<endl;
}

else if ( pilihan == 'c' || pilihan == 'C' ) {
	cout<<endl;
	cout<<" ================================================"<<endl;
	cout<<" |                  Perkalian                   |"<<endl;
	cout<<" ================================================"<<endl;

	cout<<"\n   Masukan Bilangan pertama : ";cin>>bil1;
	cout<<"   Masukan Bilangan kedua   : ";cin>>bil2;

	cout<<"\n   Hasil Dari "<<bil1<<" * "<<bil2<<" Adalah = "<<kali(bil1,bil2)<<endl<<endl;
	cout<<" ================================================"<<endl;
}

else if ( pilihan == 'D' || pilihan == 'd' ) {
	cout<<endl;
	cout<<" ================================================"<<endl;
	cout<<" |                  Pembagian                   |"<<endl;
	cout<<" ================================================"<<endl;

	cout<<"\n   Masukan Bilangan pertama : ";cin>>bil1;
	cout<<"   Masukan Bilangan kedua   : ";cin>>bil2;

	cout<<"\n   Hasil Dari "<<bil1<<" : "<<bil2<<" Adalah = "<<bagi(bil1,bil2)<<endl<<endl;
	cout<<" ================================================"<<endl;
}

else if ( pilihan == 'e' || pilihan == 'E' ) {
	cout<<endl;
	cout<<" ================================================"<<endl;
	cout<<" |                   Pangkat 2                  |"<<endl;
	cout<<" ================================================"<<endl;
	cout<<   endl;
	
	float input, hasil;
	
    cout << "   Masukkan Bilangan : ";
    cin >> input;
    
    hasil = pangkat(input);
    cout << "\n   Nilai Pangkat 2 dari "<<input<< " Adalah = "<<hasil<< endl<<endl;
	cout<<" ================================================"<<endl;;
}

else if ( pilihan == 'f' || pilihan == 'F' ) {
	cout<<endl;
	cout<<" ================================================"<<endl;
	cout<<" |                   Pangkat 3                  |"<<endl;
	cout<<" ================================================"<<endl;
	cout<<   endl;
	
    cout << "   Masukkan Bilangan : ";
    cin >> input;
    
    hasil = pangkat3(input);
    cout << "\n   Nilai Pangkat 3 dari "<<input<< " Adalah = "<<hasil<<endl<<endl;
	cout <<" ================================================"<<endl;
}

else if ( pilihan == 'g' || pilihan == 'G' ) {
	cout<<endl;
	cout<<" ================================================"<<endl;
	cout<<" |                  Akar Kuadrat                |"<<endl;
	cout<<" ================================================"<<endl;
	cout<<   endl;
	
    cout << "   Masukkan Bilangan : ";
    cin >> input;
    
    hasil = akar(input);
    cout << "\n   Nilai Akar Kuadrat dari "<<input<< " Adalah = "<<hasil<<endl<<endl;
	cout<<" ================================================"<<endl;
}

else
    {
    cout<<endl<<endl;
    cout<<" ================================================"<<endl;
    cout<<" |         Pilihan Tidak Tidak Tersedia         |"<<endl;
	cout<<" ================================================"<<endl;
	}
	cout<<endl;
	
}
	cout<<"\n Lanjut Menggunakan Kalkulator ? <y/n> : "; cin>>ulang;

}

while (ulang == "y" );
	
	cout<<endl;
	cout<<" ================================================"<<endl;
	cout<<" |                Program Selesai               |"<<endl;
	cout<<" |                                              |"<<endl;
	cout<<" |                  GoodBye :)                  |"<<endl;
	cout<<" ================================================"<<endl;
	cout<<endl;

return 0;

}
