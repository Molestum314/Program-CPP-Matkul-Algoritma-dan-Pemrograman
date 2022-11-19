#include <iostream>
#include <string.h>
#include <cstdlib>
#include <conio.h>

//code by Molestum314 {Dimas M Rizki}

using namespace std;
int main ()
{
	cout << "===========================================" <<endl;
	cout << "===== Perbandingan Menggunakan STRCMP =====" <<endl;
	cout << "===========================================" <<endl;
	cout << endl;
	
	
    char angka1[10];
    char angka2[10];
    
    cout<<"Angka Pertama : ";
    cin>>angka1;
    cout<<"Angka Kedua   : ";
    cin>>angka2;
    
    cout << "-------------------------------------------" <<endl;
    
    int hasil=
	
	strcmp(angka1, angka2);
    
    if (hasil==0)
    {cout<<"Angka "<<angka1 <<" Sama Dengan Angka "<<angka2;
	}
	else if (hasil<0)
	{cout<<"Angka "<<angka1 <<" Lebih Kecil Dari Angka "<<angka2;
	}
	else
	{cout<<"Angka "<<angka1 <<" Lebih Besar Dari Angka "<<angka2;
	}
	
	cout<<endl<<endl;
	
	system ("pause");
	
	return 0;
}
