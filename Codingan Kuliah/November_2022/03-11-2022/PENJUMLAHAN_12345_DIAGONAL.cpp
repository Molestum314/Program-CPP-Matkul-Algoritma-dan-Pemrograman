#include <iostream>

using namespace std;
int main ()
{
	int x, y, z, total;
	
	total=0;
	
	for (int x=5; x>0; x--)
	{
		z=0;
		
		for (y=1; y<=x; y++)
		{
			cout<<y;
			
			if (y<5)
			{ 
				cout<<"+";
			}
			z=z+y;
		}
		cout<<" = "<<z<<endl;
		
		total=total+z;
	}
	cout<<"Total = "<<total<<endl;
	
	cout<<endl;
	
	system ("pause");
	
	return 0;
}
