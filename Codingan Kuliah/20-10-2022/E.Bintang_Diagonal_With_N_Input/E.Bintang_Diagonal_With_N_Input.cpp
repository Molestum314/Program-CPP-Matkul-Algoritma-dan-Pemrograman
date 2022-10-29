#include <iostream>
//code by Molestum314 {Dimas M Rizki}
using namespace std;
int main()
{
	//start
	
    int n,i,x;
    
    cout << "Masukkan bilangan bulat : ";
    cin >> n;
    
    cout<<endl;

    for (i = 1; i <= n; i++)
	{
        for (x = 1; x <= i; x++)
		{
            cout << "* ";
        }
        cout << "\n";
    }
    
    //end for
    //end
}
