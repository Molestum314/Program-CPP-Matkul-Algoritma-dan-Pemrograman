#include <iostream>
#include <iomanip>
#include <cmath>
//code by Molestum314 {Dimas M Rizki}
using namespace std;
int main ()
{
    int bil;
    cout << left << setw(6) << "X" << 
	left << setw(8) << "X^2" << 
	left << setw(8) << "X^3" << endl << "====================" << endl;
   
    for (bil = 1; bil <= 10; bil++)
	{
        cout << left << setw(7) << bil << 
        left << setw(8) << pow(bil, 2) << 
        left << setw(8) << pow(bil, 3) << endl;
    }
}
