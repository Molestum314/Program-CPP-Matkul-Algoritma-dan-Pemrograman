#include<iostream>
//code by Molestum314 {Dimas M Rizki}
using namespace std;
int main()
{
    int n, i, j;
    
	// cout << "Input N: ";
      // cin >> n;
      
      for (i = 1; i <= 5; i++)
      {
            for (j = 1; j <= i; j++)
            {
                  cout << "*";
            }
            // 5 Dari Atas Ke Bawah
            cout << "\n";
      }
      
      // Di Sini Tengahnya
      
      for (i = 4; i >= 1; i--)
      {
            for (j = 1; j <= i; j++)
            {
                  cout << "*";
            }
            // 4 Dari Bawah Ke Atas
            cout << "\n";
      }
      
      cout<<endl;
      
      system ("pause");
      
    return 0;
}
