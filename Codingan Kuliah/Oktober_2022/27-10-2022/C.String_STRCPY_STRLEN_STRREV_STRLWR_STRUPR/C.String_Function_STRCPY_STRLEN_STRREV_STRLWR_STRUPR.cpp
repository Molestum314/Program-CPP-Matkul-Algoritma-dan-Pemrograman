#include <iostream>
#include <string.h>
#include <cstdlib>
#include <conio.h>

//code by Molestum314 {Dimas M Rizki}

using namespace std;
int main()
{
    
    cout<<" Masukkan Kata Untuk DI Uji : ";
    
    char kata [1000];
    char kata2 [1000];
     
    gets (kata);
    cout<<" Panjang Karakter    : " <<
	
	//strlen : untuk menghitung jumlah karakter yang ada dalam suatu string
	strlen(kata)<<" Karakter"<<endl;
    
    //strcpy : untuk menyalin suatu string ke variable
    strcpy(kata2,kata);
    cout<<" Kata Yang Disalin   : "<<kata2<<endl;
    
    //strupr : untuk mengubah semua huruf menjadi huruf kapital
    strupr(kata);
    cout<<" Huruf Besar Semua   : "<<kata<<endl;
    
    //strlwr : untuk mengubah semua huruf menjadi huruf kecil
    strlwr(kata);
    cout<<" Huruf Kecil Semua   : "<<kata<<endl;
    
    //strrev : untuk membalikan urutan suatu string.
    strrev(kata);
    cout<<" Huruf Jadi Terbalik : "<<kata<<endl;
    
    cout<<endl;
    
    system ("pause");
    
    return 0;
}
