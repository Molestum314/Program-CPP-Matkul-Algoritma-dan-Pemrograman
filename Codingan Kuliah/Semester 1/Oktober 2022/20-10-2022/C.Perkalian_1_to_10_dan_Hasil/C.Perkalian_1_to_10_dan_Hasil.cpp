#include <iostream>
//code by Molestum314 {Dimas M Rizki}
using namespace std;
int main ()
{
	//start
    int x = 1, i;
    
    for (i = 1; i <= 10; i++)
	{
        
        if (i < 10)
			{
            cout << i << " * ";
        	}
		else
			{
            cout << i;
        	}
        	
        	//end if
        	
        	x = x * i;
    }
    //end for
    
    cout << " = " << x;
    
    //end
}
