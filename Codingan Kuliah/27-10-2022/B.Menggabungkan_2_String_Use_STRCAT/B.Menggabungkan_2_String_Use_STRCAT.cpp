#include <iostream>
#include <string.h>
#include <cstdlib>

//code by Molestum314 {Dimas M Rizki}

using namespace std;
int main()
{
	char tanya [50] = "Siapa Namanya ? Dimana Rumahnya? ";
	cout<<"Pertanyaan : "<<tanya<<endl;
	
	char jawab [50] = "Nama Saya Sambo Di Rumah Dinas";
	cout<<"Jawaban    : "<<jawab<<endl;
	
	cout<<endl;
	
	strcat(tanya,jawab);
	cout<<"Pertanyaan dan Jawaban : "<<tanya<<endl;
	
	cout<<endl;
	
	system("pause");
	
	return 0;
	
}
