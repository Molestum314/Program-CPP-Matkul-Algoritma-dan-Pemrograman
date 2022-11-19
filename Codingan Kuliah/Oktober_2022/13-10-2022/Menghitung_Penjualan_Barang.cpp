#include<iostream>

using namespace std;
int main() 
{
    string NamaBarang; 
	char KodeBarang;
    int Jumlah, Penjualan, TA, HargaBarang;
	float Diskon;
	
	cout << "---------------------------" <<endl;
    cout << " Aplikasi Penjualan Barang" <<endl;
    cout << "---------------------------" <<endl;
    cout << endl;
    
    cout << " Kode Barang	   : "; 
	cin >> KodeBarang;
    
    cout << " Nama Barang       : "; 
	cin >> NamaBarang;
    
    cout << " Jumlah            : "; 
	cin >> Jumlah;
	
	cout << endl;
	cout << "---------------------------" <<endl;
    cout << endl;
    
    switch(KodeBarang)  
  	{  
   	case 'A':  
   	case 'a' :  
   		HargaBarang=10000;  
   		break;   
   
   	case 'B':  
   	case 'b'  :  
   		HargaBarang=8000;  
   		break;  
   
   	case 'C':  
   	case 'c'  :  
   		HargaBarang=6000;  
   		break;  
   	
   	default :
   		HargaBarang=4000;
	}
    cout << " Harga Barang      : Rp."<<HargaBarang<<endl;
	
	Penjualan = HargaBarang*Jumlah;
    cout <<" Penjualan	   : Rp."<<Penjualan<<endl;
    
	if ( Penjualan >= 100000 )
    {
    Diskon = 0.10*Penjualan;
    }
    
    else
    {
    Diskon = 0;
	}
    
	cout << " Discount	   : Rp."<<Diskon<<endl;
	
	TA = Penjualan-Diskon;
	cout << " Total Penjualan   : Rp."<<TA<<endl;
	
	cout << endl;
	cout << "-------------------------" <<endl;
	cout << endl;
	cout << " Terima kasih" <<endl<<endl;
	
    return 0;
}
