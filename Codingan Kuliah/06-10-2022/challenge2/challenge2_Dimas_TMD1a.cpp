#include<iostream>

using namespace std;
int main() 
{
    string NamaBarang;
    int Diskon, HargaBarang, Jumlah, Penjualan, TA, KodeBarang;
	
    cout << "Aplikasi Penjualan Barang" <<endl;
    cout << endl;
    
    cout << " Kode Barang	   : "; 
	cin >> KodeBarang;
    
    cout << " Nama Barang       : "; 
	cin >> NamaBarang;
    
    cout << " Harga Barang      : Rp."; 
	cin >> HargaBarang;
    
    cout << " Jumlah            : "; 
	cin >> Jumlah;
	
	cout << endl;
	cout << "--------------------------" <<endl;
    cout << endl;
    
    Penjualan = HargaBarang*Jumlah;
    cout <<" Penjualan	   : Rp."<<Penjualan<<endl;
    
    	if ( Penjualan >= 500000 )
    	{
        Diskon = 0.10 * Penjualan;
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
	cout << " Terimakasih" <<endl<<endl;
	
    return 0;
}
