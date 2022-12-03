#include <iostream>
#include <conio.h>

using namespace std;

int pajak ( float cost1, float count1 )

{
	
 int total, tax, total2;
 
 total = cost1*count1;
 
 tax = total*0.1;
 
 total2 = total + tax;
 
 cout<<"\n Pajak 10%     : "<<tax;
 cout<<endl;
 cout<<"---------------------------------------"<<endl;
 cout<<"\n Total Harga Yang di Bayar  : "<<total2;
 cout<<endl;
 
}//END FUNCTION

 void pertama() {

 int cost, count, total;
 
 cout << "====================================" << endl;
 cout << "##  Program C++ Pembelian Makanan ##" << endl;
 cout << "====================================" << endl;
 cout << endl;
 
 cout<<" Harga Makanan : ";
 cin>>cost;
 cout<<" Jumlah Makanan Yang Di Beli  : ";
 cin>>count;
 
 total = cost*count;
 
 cout<<"\n Total Harga Pembelian      : "<<total<<endl;
 
 pajak( cost, count );

}//END FUNCTION

 int main() {

 pertama();
 
 getch();

}//END FUNCTION
