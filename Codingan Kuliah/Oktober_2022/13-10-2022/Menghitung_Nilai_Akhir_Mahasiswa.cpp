#include<iostream>

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
    
    cout<<" NA : "<<NA<<endl;
    
    //Hasil Perhitungan
  	if ((NA >= 80) && (NA <= 100)) {
  	cout<<" NH  \t   : A \n";
  	cout<<" MUTU  \t : 4 \n";
  	} else if ((NA>=75) && (NA <= 79.99)) {
  	cout<<" NH  \t   : B+ \n";
  	cout<<" MUTU  \t : 3.5 \n";
  	} else if ((NA>=70) && (NA <= 74.99)) {
  	cout<<" NH  \t   : B \n";
  	cout<<" MUTU  \t : 3 \n";
  	} else if ((NA>=65) && (NA <= 69.99)) {
  	cout<<" NH  \t   : C+ \n";
  	cout<<" MUTU  \t : 2.5 \n";
  	} else if ((NA>=60) && (NA <= 64.99)) {
  	cout<<" NH  \t   : C \n";
  	cout<<" MUTU  \t : 2 \n";
  	} else if ((NA>=55) && (NA <= 59.99)) {
  	cout<<" NH  \t   : D+ \n";
  	cout<<" MUTU  \t : 1.5 \n";
  	} else if ((NA>=50) && (NA <= 54.99)) {
  	cout<<" NH  \t   : D \n";
  	cout<<" MUTU  \t : 1 \n";
  	} else {
  	cout<<" NH  \t   : E \n";
  	cout<<" MUTU  \t : 0 \n";
    }
        
    cout << endl;
	cout << "==========================" <<endl;
	cout << endl;
	
	cout << " Terima kasih :)" <<endl<<endl;
    
    return 0;
}

