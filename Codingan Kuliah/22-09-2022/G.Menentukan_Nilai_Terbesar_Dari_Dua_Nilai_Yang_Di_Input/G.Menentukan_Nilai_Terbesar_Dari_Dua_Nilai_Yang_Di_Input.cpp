#include <iostream>
//code by Molestum314 {Dimas M Rizki}
using namespace std;
int main()
{
	float a,b,c;
	
	cout <<"=====================================" << endl;
	cout <<"===== MENCARI BILANGAN TERBESAR =====" << endl;
	cout <<"=====================================" << endl;
	cout <<endl;
	
	//Input
	cout <<"Masukan bilangan pertama : ";
	cin >> a;
	cout <<"Masukan bilangan kedua   : ";
	cin >> b;
	
	cout <<"------------------------------------" << endl;
	
	//If_Else+Output
	if (a>b) {
		cout << a <<" Adalah Bilangan Terbesar "; 
		}
	else {
		cout << b <<" Adalah Bilangan Terbesar ";
		}
	cout << endl;
	
	return 0;
}
