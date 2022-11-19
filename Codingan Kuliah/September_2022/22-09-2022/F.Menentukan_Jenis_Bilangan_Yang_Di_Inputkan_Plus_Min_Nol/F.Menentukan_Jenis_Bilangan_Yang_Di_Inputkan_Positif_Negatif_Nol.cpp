#include<iostream>
//code by Molestum314 {Dimas M Rizki}
using namespace std;
int main() 
{
    float a;
	
    cout << "=====================================================" <<endl;
    cout << "===== Menentukan bilangan positif, negatif, nol =====" <<endl;
    cout << "=====================================================" <<endl;
    cout << endl;
	
	//Input
    cout << "Masukkan bilangan : "; 
	cin >> a;
	
    cout << "-----------------------------------------------------" << endl;
	
	//If_Else+Output
    if ( a == 0 )
        cout << "Merupakan bilangan nol " << endl;
    else if ( a > 0 )
        cout << "Merupakan bilangan positif " << endl;
    else
        cout << "Merupakan bilangan negatif " << endl;
	
    return 0;
}
