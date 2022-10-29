#include<iostream>
//code by Molestum314 {Dimas M Rizki}
using namespace std;
int main() 
{
    string Nama, Prodi, Matkul;
	double NQ, Nmid, NT, Nuas, Nim, NA;
	
    cout << "==========================" <<endl;
    cout << "===== Aplikasi Nilai =====" <<endl;
    cout << "==========================" <<endl;
    cout << endl;
    
    cout << " Nim	     : "; 
	cin >> Nim;
    
    cout << " Nama        : "; 
	cin >> Nama;
    
    cout << " Prodi       : "; 
	cin >> Prodi;
    
    cout << " Mata Kuliah : "; 
	cin >> Matkul;
    
    cout << " Nilai Quiz  : "; 
	cin >> NQ;
    
    cout << " Nilai Mid   : "; 
	cin >> Nmid;
    
    cout << " Nilai UAS   : "; 
	cin >> Nuas;
    
    cout << " Nilai Tugas : "; 
	cin >> NT;
	
	cout << endl;
	cout << "==========================" <<endl;
    cout << endl;
    
    NA=0.15*NQ+0.25*Nmid+0.30*NT+0.30*Nuas;

    cout<<" Nilai Akhir : "<<NA<<endl;
    
    if ( NA == 60 )
        cout << " Lulus " << endl;
    else if ( NA > 60 )
        cout << " Lulus " << endl;
    else
        cout << " Gagal " << endl;
    
        
    cout << endl;
	cout << "===========================" <<endl;
	cout << endl;
	
	cout << " Terimakasih " <<endl<<endl;
	
    return 0;
}

