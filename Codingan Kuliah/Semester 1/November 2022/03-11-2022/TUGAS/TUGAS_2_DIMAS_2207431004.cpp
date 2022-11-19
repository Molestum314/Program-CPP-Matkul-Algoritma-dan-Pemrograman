#include<iostream>
//Dimas Muhammad Rizki (2207431004) ~TMD 1A~
using namespace std;
int main() 
{
	char KodePaket;
    int BiayaKursus, BP, TB;
	
	cout << "============================================" <<endl;
    cout << "===== Aplikasi Menghitung Biaya Kursus =====" <<endl;
    cout << "============================================" <<endl;
    cout << endl;
    
    //Input Nama, Menggunakan getline Agar Bisa Menggunakan Spasi
    std::string kata;
    std::cout << " Nama       : ";
    std::getline(std::cin, kata);
    
    //Input Alamat, Menggunakan getline Agar Bisa Menggunakan Spasi Ataupun Tanda Baca
    std::string kata2;
    std::cout << " Alamat     : ";
    std::getline(std::cin, kata2);
    
	//Input Kode Paket yang Diambil
	cout << " Kode Paket : "; 
	cin >> KodePaket;
	
	cout << endl;
	cout << "--------------------------------------------" <<endl;
    cout << endl;
    
    //Biaya Pendaftaran
    BP = 100000;
	cout <<" Biaya Pendaftaran : Rp."<<BP;
    
    //Input Kode Paket Bisa Menggunakan Huruf Besar Atau Kecil
    switch(KodePaket)  
  	{  
   	case 'A':  
   	case 'a' :  
   		BiayaKursus=1500000;
   		cout<<endl;
		cout<<" Biaya Kursus      : "<<BiayaKursus<<endl;
		cout<<" Lama Kursus       : 6 Bulan"<<endl;
   		break;   
   
   	case 'B':  
   	case 'b'  :  
   		BiayaKursus=1000000;
   		cout<<endl;
		cout<<" Biaya Kursus      : "<<BiayaKursus<<endl;
		cout<<" Lama Kursus       : 4 Bulan"<<endl;
   		break;  
   		
   	case 'C':  
   	case 'c'  :  
   		BiayaKursus=750000;
   		cout<<endl;
		cout<<" Biaya Kursus      : "<<BiayaKursus<<endl;
		cout<<" Lama Kursus       : 2 Bulan"<<endl;
   		break;  
   
   	case 'D':  
   	case 'd'  :  
   		BiayaKursus=500000;
   		cout<<endl;
		cout<<" Biaya Kursus      : "<<BiayaKursus<<endl;
		cout<<" Lama Kursus       : 1 Bulan"<<endl;
   		break;  
   	
   	default :
   		BiayaKursus=0;
   		cout<<endl;
		cout<<" Biaya Kursus      : "<<BiayaKursus<<endl;
		cout<<" Lama Kursus       : Tidak Tersedia"<<endl;
	}
	
	//Biaya Pendaftaran Ditambah Biaya Kursus
	TB = BP+BiayaKursus;
	
	//Total Biaya Dari Hasil Penjumlahan Sebelumnya
    cout <<" Total Biaya       : Rp."<<TB<<endl;
	
	cout<<endl;
	
	system("Pause");
	
    return 0;
}
