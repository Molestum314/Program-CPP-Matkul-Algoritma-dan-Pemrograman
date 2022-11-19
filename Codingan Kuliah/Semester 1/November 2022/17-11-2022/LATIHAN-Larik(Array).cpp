#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string.h>
#include <cmath>

//Code By Dimas Muhammad Rizki {TMD 1A}

using namespace std;

int main()
{
	//Deklarasi variabel
	int i;
	float nilai[10];
	float total = 0;
	float rata, max, min;
	string nama[10], nim[10];
	
	//Tampilan input
	cout<<"======================="<<endl;
	cout<<"Masukkan Data Mahasiswa"<<endl;
	cout<<"=======================\n"<<endl;
	
		//Memunculkan input
		for (i=1; i<6; i++)
		{
			cout << "Masukkan nim   ke- " << i << " = "; cin >> nim[i];
			cout << "Masukkan nama  ke- " << i << " = "; cin >> nama[i];
			cout << "Masukkan nilai ke- " << i << " = "; cin >> nilai[i];
			cout << endl;
		}
		
		//Tampilan output
		cout<<"======================"<<endl;
		cout<<"Daftar Nilai Mahasiswa"<<endl;
		cout<<"======================"<<endl;
		cout<<"----------------------------------------------"<<endl;
		
		//Menampilkan output yang berasal dari input
		cout << left << setw(6) << "No" << 
		left << setw(15) << "Nim" << 
		left << setw(20) << "Nama" <<
		left << setw(10) << "Nilai" << endl;
		
		cout <<"----------------------------------------------"<< endl;
		
		for (i=1; i<6; i++)
		{
			cout << left << setw(6) << i << 
        	left << setw(15) << nim[i] << 
        	left << setw(20) << nama[i] << 
        	left << setw(10) << nilai[i] << endl;
			
			//Menghitung otal keseluruhan nilai
			total = total + nilai[i];
		}
		
	cout<<"----------------------------------------------"<<endl;
	
	//Menentukan nilai tertinggi
	max = nilai [1];
	for (i = 1; i<6; i++)
	{
		if (nilai[i] > max)
		{
			max = nilai[i];
		}
	}
	
	//Menentukan nilai terendah
	min = nilai [1];
	for (i = 1; i<6; i++)
	{
		if (nilai[i] < min)
		{
			min = nilai[i];
		}
	}
			
	//menghitung nilai rata-rata
	rata = total/5;
	
	//Menampilkan Output
	cout << "Nilai tertinggi\t\t:" << max << endl;
	cout << "Nilai terendah\t\t:" << min << endl;
	
	cout << endl;
	cout << "Total Nilai\t\t:" << total << endl;
	cout << "Nilai rata-rata\t\t:" << rata << endl;
	
	return 0;
	
}
