#include <iostream>
//Dimas Muhammad Rizki (2207431004) ~TMD 1A~
using namespace std;
int main()
{
	
	cout << "====================================" <<endl;
    cout << "===== Aplikasi Menukar Dua Isi =====" <<endl;
    cout << "====================================" <<endl;
    cout << endl;
    
	//Saya Menggunakan string
	
	//String GelasC Untuk Menampung Pertukaran Data Anatara GelasA dan GelasB
    string GelasC;

    //Saya Menggunakan std::string dan std::getline Agar Inputnya Lebih bervariasi Dan Dapat Menggunakan Spasi
    std::string GelasA;
	std::cout << " Gelas A : ";
    std::getline(std::cin, GelasA);

    std::string GelasB;
    std::cout << " Gelas B : ";
    std::getline(std::cin, GelasB);
   
	GelasC = GelasB;
	GelasB = GelasA;
	GelasA = GelasC;
   
	cout<<endl;
   
	cout << " Gelas A : "<<GelasA<< endl;  
	cout << " Gelas B : "<<GelasB<< endl;
	
	cout<<endl;
  
  	system("Pause");
  	
	return 0;
	
}
