#include <iostream>
#include <math.h>

using namespace std;
int main()
{
  cout << "==================================" <<endl;
  cout << "===== Akar Persamaan Kuadrat =====" << endl;
  cout << "==================================" << endl;
  cout << endl;
 
  int a, b, c, D;
  float x1, x2;
 
  cout << "Input nilai a : ";
  cin >> a;
  cout << "Input nilai b : ";
  cin >> b;
  cout << "Input nilai c : ";
  cin >> c;
 
  cout << endl;
 
  D = (b*b)-(4*a*c);
  cout << "Diskriminan = " << D;
 
  if (D>0){
    cout << " (Akar real dan berbeda)" <<endl;
 
    x1 = (-b + sqrt(D)) / (2*a);
    x2 = (-b - sqrt(D)) / (2*a);
 
    cout << "x1 = " << x1 <<endl;
    cout << "x2 = " << x2 <<endl;
  }
  
  else if (D==0){
    cout << " (Akar real dan sama)" <<endl;
 
    x1 = x2 = (-b + sqrt(D)) / (2*a);
 
    cout << "x1 = " << x1 <<endl;
    cout << "x2 = " << x2 <<endl;
  }
  
  else {
    cout << " (Akar tidak real / imajiner)" <<endl;
  }
  
  cout << endl;
 
  return 0;
}
