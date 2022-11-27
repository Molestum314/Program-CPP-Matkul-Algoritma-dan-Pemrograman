#include <iostream>
#include <conio.h>
#include <iomanip> 

//Code by Dimas Muhammad Rizki -  TMD 1A
//Program penjumlahan matriks 3x4

using namespace std;
int main()
{
	int a, b;
	int matA[3][4], matB[3][4], matjuml[3][4];
	
	cout<<" Penjumlahan Matriks 3x4"<<endl; 
	cout<<"========================="<<endl;
	cout<<endl;
	
	//Input Nilai matriks A
	cout<<"Masukkan Elemen Matriks A"<<endl;
	for(a=0; a<3; a++)
	{
        for(b=0; b<4; b++)
		{
         cout<<"Nilai A ["<<(a)<<"] ["<<(b)<<"] = ";
         cin>>matA[a][b];
    	}
     cout<<endl;
	}
	
	//Input Nilai matriks B
	cout<<endl<<endl;
	cout<<"Masukkan Elemen Matriks B"<<endl;
	for(a=0; a<3; a++)
	{
        for(b=0; b<4; b++)
		{
         cout<<"Nilai A ["<<(a)<<"] ["<<(b)<<"] = ";
         cin>>matB[a][b];
    	}
     cout<<endl;
	}
	
	//Rumus Penjumlahan
	for(a=0; a<3; a++){
        for(b=0; b<4; b++){
            matjuml[a][b]=matA[a][b]+matB[a][b];
    }}
    
	cout<<"========================="<<endl;
	cout<<endl;
	cout<<"        Matriks A        "<<endl;
	cout<<"-------------------------"<<endl;
	//Menampilkan Output dari hasil Input Matriks A
	for (a=0; a<3; a++)
	{
		for (b=0; b<4; b++)
			{
				cout<<left<<setw(6)<<matA[a][b];
			}
		cout<<endl;
	}
	
	cout<<endl;
	cout<<"        Matriks B        "<<endl;
	cout<<"-------------------------"<<endl;
	//Menampilkan Output dari Input Matriks B
	for (a=0; a<3; a++)
	{
		for (b=0; b<4; b++)
			{
				cout<<left<<setw(6)<<matB[a][b];
			}
		cout<<endl;	
	}
	
	cout<<endl;
	cout<<"Hasil Penjumlahan Matriks"<<endl;
	cout<<"-------------------------"<<endl;
	//Menampilkan Hasil Dari Penjumlahan Matriks A Dan Matriks B
	for(a=0;a<3;a++)
	{
        for(b=0;b<4;b++)
		{
            cout<<left<<setw(6)<<matjuml[a][b];
        }
        cout<<endl;
	}
	
getch();

}
