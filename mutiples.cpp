#include <iostream>
using namespace std;

int main()
{
  int n,mul=1,m;
  cout<< "Enter a no.";
  cin>> n;
  while (n!=0)
  {
    m=n%10;
    mul= mul*m;
    n=n/10;
  }
    cout << "Mul is="<< mul;
}