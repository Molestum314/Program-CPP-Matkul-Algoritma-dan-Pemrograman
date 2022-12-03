#include <iostream>

//Code by Dimas Muhammad Rizki - TMD 1A

using namespace std;

int harga_makanan (int a, int b)
{ int c;
	c = a*b;
	return c;
}

float pajak (int f)
{ float d;
	d = f * 0.1;
	return d;
}

int harga_pajak (int o, int p)
{ int e; 
    e = o + p;
	return e;
}

int main (){
	
	int hm, hp, jml, np, htp;
	
    cout << "=============================================" << endl;
    cout << "##      Program C++ Pembelian Makanan      ##" << endl;
    cout << "=============================================" << endl;
    cout << endl;
 
	cout << " Harga Makanan               : Rp.";
	cin >> hm;
	
	cout << " Jumlah Makanan Yang Di Beli : ";
	cin >> jml;
	
	cout<<"\n---------------------------------------------\n"<<endl;
	
	hp = harga_makanan (hm,jml);
	cout << " Total Harga Pembelian     = Rp."<<hp<<endl;
	np = pajak (hp);
	cout << " PPN 10%                   = Rp."<<np<<endl;
	
	cout<<"\n---------------------------------------------\n"<<endl;
	
	htp = harga_pajak (hp,np);
	cout << " Total Yang Harus di Bayar = Rp."<< htp <<endl;
	
	return 0;
}
