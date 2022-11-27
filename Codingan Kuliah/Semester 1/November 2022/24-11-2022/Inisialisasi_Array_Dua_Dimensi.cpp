#include <iostream>
#include <conio.h>

//Code by Dimas Muhammad Rizki - TMD 1A
//Inisialisasi Array 2 Dimensi

using namespace std;
main()

{ 

cout<<"Array Dua Dimensi\n";
cout<<"=================\n";
 cout<<"Nama\t : Dimas Muhammad Rizki\n\n";
 cout<<"Inisial\t : "<<endl;
 
int i,j;
int huruf_A[8][8] =

{
{ 0, 0, 0, 0, 0, 0, 0, 0 } ,
{ 0, 1, 1, 1, 1, 0, 0, 0 } ,
{ 0, 1, 0, 0, 0, 1, 0, 0 } ,
{ 0, 1, 0, 0, 0, 0, 1, 0 } ,
{ 0, 1, 0, 0, 0, 0, 1, 0 } ,
{ 0, 1, 0, 0, 0, 1, 0, 0 } ,
{ 0, 1, 1, 1, 1, 0, 0, 0 } ,
{ 0, 0, 0, 0, 0, 0, 0, 0 } 
};

for(i = 0; i < 8; i++) //Menentukan berapa baris yang dipanggil

	{
	 
	 for(j = 0; j < 8; j++) //Menentukan berapa kolom yang dipanggil

		{

 		 //Setiap nilai satu pada array akan diganti dengan karakter ber-ASCII219 (xDB)
 		 if (huruf_A[i][j]==1)
		 cout<<'\xDB';
 
 		 //nilai 0 akan diganti dengan karakter spasi (x20)
 		 else
 		 cout<<'\x20';
 
		}

	 cout<<endl;
 
	}

 getch();
 
}


