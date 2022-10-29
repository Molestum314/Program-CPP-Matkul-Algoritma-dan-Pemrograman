#include <iostream>
//code by Molestum314 {Dimas M Rizki}
using namespace std;
int main()
{
	float celcius, fahrenheit, reamur ;
	
	cout << "===============================================================" << endl;
	cout << "===== Konversi Suhu Celcius Menjadi Fahrenheit Dan Reamur =====" << endl;
	cout << "===============================================================" << endl;
	cout << endl;
	
	//Input
	cout << "Masukkan suhu Celsius : ";
	cin >> celcius;
	
	cout << "--------------------------------------------------------------" << endl;
	
	//formula
	fahrenheit = (9.0/5.0 * celcius) + 32;
	reamur = celcius * (4.0/5.0) ;
	
	//Output
	cout << celcius << " derajat Celcius = " << fahrenheit <<" derajat Fahrenheit";
	cout << endl;
	cout << celcius << " derajat Celcius = " << reamur <<" derajat Reamur";
	cout << endl;
	
	return 0;
}
