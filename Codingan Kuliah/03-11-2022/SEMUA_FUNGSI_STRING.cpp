#include <iostream>
#include <string.h>
#include <cstdlib>
#include <conio.h>

//code by Molestum314 {Dimas M Rizki}

using namespace std;
int main()
{
    
    cout << "======================================================" <<endl;
	cout << "===== Program Menggunakann Berbagai Macam String =====" <<endl;
	cout << "======================================================" <<endl;
	cout << endl;
    
    cout<<" Masukkan Kata Untuk DI Uji : ";
	
    char kata [1000];
    char kata2 [1000];
	
    gets (kata);
    
    cout<<endl;
    
    cout<<" Panjang Karakter           : " <<
	
	//strlen : untuk menghitung jumlah karakter yang ada dalam suatu string
	strlen(kata)<<" Karakter"<<endl;
    
    //strcpy : untuk menyalin suatu string ke variable
    strcpy(kata2,kata);
    cout<<" Kata Yang Disalin          : "<<kata2<<endl;
    
    //strupr : untuk mengubah semua huruf menjadi huruf kapital
    strupr(kata);
    cout<<" Huruf Besar Semua          : "<<kata<<endl;
    
    //strlwr : untuk mengubah semua huruf menjadi huruf kecil
    strlwr(kata);
    cout<<" Huruf Kecil Semua          : "<<kata<<endl;
    
    //strrev : untuk membalikan urutan suatu string.
    strrev(kata);
    cout<<" Huruf Jadi Terbalik        : "<<kata<<endl;
    
    
    cout<<endl<<endl;
    
    
    //strcat : Untuk menggabungkan dua string
    char tanya [1000] = "Siapa Namanya ? Dimana Rumahnya ? ";
	cout<<" Pertanyaan : "<<tanya<<endl;
	
	char jawab [1000] = "Nama Saya Sanbo, Di Rumah Dinas";
	cout<<" Jawaban    : "<<jawab<<endl;
	
	strcat(tanya,jawab);
	cout<<" Pertanyaan dan Jawaban : "<<tanya<<endl;
	
	
	cout<<endl<<endl;
	
	
	//strcmp : Untuk membandingkan dua string
	cout << "=================================================" <<endl;
	cout << "===== Perbandingan Angka Menggunakan STRCMP =====" <<endl;
	cout << "=================================================" <<endl;
	cout << endl;
	
	char angka1[100];
    char angka2[100];
    
    cout<<" Masukkan Angka Pertama : ";
    cin>>angka1;
    cout<<" Masukkan Angka Kedua   : ";
    cin>>angka2;
    
    cout << "-------------------------------------------------" <<endl;
    
    int hasil=
	
	strcmp(angka1, angka2);
    
    if (hasil==0)
    {cout<<" Angka "<<angka1 <<" Sama Dengan Angka "<<angka2;
	}
	else if (hasil<0)
	{cout<<" Angka "<<angka1 <<" Lebih Kecil Dari Angka "<<angka2;
	}
	else
	{cout<<" Angka "<<angka1 <<" Lebih Besar Dari Angka "<<angka2;
	}
	
	cout<<endl<<endl;
	
    
    cout<<endl;
    
    system ("pause");
    
    return 0;
}
