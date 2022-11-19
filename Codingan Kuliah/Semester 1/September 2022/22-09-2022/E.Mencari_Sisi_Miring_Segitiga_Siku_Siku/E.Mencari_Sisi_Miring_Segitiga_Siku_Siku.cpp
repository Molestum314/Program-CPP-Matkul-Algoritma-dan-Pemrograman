#include<iostream>
#include<math.h>
//code by Molestum314 {Dimas M Rizki}
using namespace std;
int main()
{
	int a, b, c;
	
	cout << "==================================================" <<endl;
	cout << "===== MENCARI SISI MIRING SEGITIGA SIKU-SIKU =====" <<endl;
	cout << "==================================================" <<endl;
	cout << endl;
	
	//Input
	cout << "Masukan panjang sisi A : ";
	cin >> a;
	cout << "Masukan panjang sisi B : ";
	cin >> b;
	
	cout<< "--------------------------------------------------" <<endl;
	
	//Formula
	c = sqrt((a*a)+(b*b));
	
	//Output
	cout << "Hasil sisi miring (C)  : "<<c<<endl;
	
	return 0;
}
