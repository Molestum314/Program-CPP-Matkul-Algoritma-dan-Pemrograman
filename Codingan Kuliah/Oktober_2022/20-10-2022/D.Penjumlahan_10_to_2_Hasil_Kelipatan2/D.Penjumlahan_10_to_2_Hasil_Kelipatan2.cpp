#include <iostream>
using namespace std;
//code by Molestum314 {Dimas M Rizki}
int main ()
{
	//start
	
    int i, x = 0;
    for (i = 10; i >= 2; i -= 2)
	{
        x = x + i;
        
        if (i > 2)
			{
            cout << i << " + ";
        	}
		else
			{
            cout << i;
        	}
    }
    
    //end for
    
    cout << " = " << x;
    
    //end
}
