#include <iostream>

//Code by Dimas Muhammad Rizki - TMD 1A

using namespace std;

void ULANG (char kar, int jum)
{
	for(int i=1;i<=jum;i++)
	{cout<<kar;
	}
	
cout<<endl;

}

int main(){ 
  cout << "===========================================" << endl;
  cout << "##  Program C++ Menentukan Ganjil-Genap  ##" << endl;
  cout << "===========================================" << endl;
  cout << endl;
 
  int x;
 
  cout << "Masukkan Bilangan : ";
  cin >> x;
 
  if (x % 2 == 0) {
    cout << x << " Merupakan Bilangan Genap\n\n";
    cout<<endl;
    ULANG(' *',x);
  }
  
  else {
    cout << x << " Merupakan Bilangan Ganjil\n\n";
    cout<<endl;
    ULANG(' #',x);
  }
 
  cout << endl;
  
  return 0;
  
}
