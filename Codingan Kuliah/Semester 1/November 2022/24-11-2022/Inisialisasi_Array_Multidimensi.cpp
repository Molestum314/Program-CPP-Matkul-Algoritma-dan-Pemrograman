#include <iostream>
#include <conio.h>

//Code by Dimas Muhammad Rizki -  TMD 1A
//Inisialisasi Array Multidimensi

using namespace std;
main()

{

 cout<<"Array Multidimensi\n";
 cout<<"===============================\n";
 cout<<"Nama\t : Dimas Muhammad Rizki\n\n";
 cout<<"Inisial\t : "<<endl;
 
 int i,j,k;

 int huruf_A_B[3][8][8]=

 {
 { 
 {0,0,0,0,0,0,0,0}, //kode ASCII219 huruf D
 {0,1,1,1,1,0,0,0},
 {0,1,0,0,0,1,0,0},
 {0,1,0,0,0,0,1,0},
 {0,1,0,0,0,0,1,0},
 {0,1,0,0,0,1,0,0},
 {0,1,1,1,1,0,0,0},
 {0,0,0,0,0,0,0,0} },
 
 { 
 {0,0,0,0,0,0,0,0}, //kode ASCII219 huruf M
 {0,1,1,1,1,1,1,0},
 {0,1,0,1,1,0,1,0},
 {0,1,0,1,1,0,1,0},
 {0,1,0,0,1,0,1,0},
 {0,1,0,0,0,0,1,0},
 {0,1,0,0,0,0,1,0},
 {0,0,0,0,0,0,0,0} },
 
 { 
 {0,0,0,0,0,0,0,0}, //kode ASCII219 huruf R
 {0,1,1,1,1,0,0,0},
 {0,1,0,0,0,1,1,0},
 {0,1,1,1,1,0,0,0},
 {0,1,0,0,1,1,0,0},
 {0,1,0,0,0,1,1,0},
 {0,1,0,0,0,0,1,0},
 {0,0,0,0,0,0,0,0} }
 
};
 	
 for (i=0;i<3;i++) //Menentukan berapa huruf inisial yang dipanggil
 
 	{ 
	 
	 for(j=0;j<8;j++) //Menentukan berapa baris yang dipanggil
	 
		{ 
		
	  	 for(k=0;k<8;k++) //Menentukan berapa kolom yang dipanggil
 
 		 //Setiap nilai 1 pada array akan diganti dengan karakter ber-ASCII219 (xDB)
 		 if (huruf_A_B[i][j][k]==1)
 		 cout<<'\xDB';
 
 		 //nilai 0 akan diganti dengan karakter spasi (x20)
 		 else
 		 cout<<'\x20';
 
 		 cout<<endl;
 		
		}
		
 	}
 
 getch();
 
}


	
 
 

