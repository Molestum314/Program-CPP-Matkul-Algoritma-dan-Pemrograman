#include <iostream>
//code by Molestum314 {Dimas M Rizki}
using namespace std;
int main()
{
	int a;
	
	cout <<"============================================" << endl;
	cout <<"===== MENENTUKAN BILANGAN GANJIL GENAP =====" << endl;
	cout <<"============================================" << endl;
	cout << endl;

	//Input
	cout << "Masukkan bilangan bulat : ";
	cin >> a;
	
	cout <<"--------------------------------------------" << endl;

	//If_Else+Output
	if (a % 2 == 0) {
		cout << a << " Merupakan bilangan genap";
		}
		
	else {
		cout << a << " Merupakan bilangan ganjil";
		}
		
	cout << endl;
	
	return 0;
}
