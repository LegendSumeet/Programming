
#include <iostream>
using namespace std;

int swap(int &a, int &b, int &c)
{

    a = a ^ b ^ c;

    b = a ^ b ^ c;

    c = a ^ b ^ c;

    a = a ^ b ^ c;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    cout << "Before swapping a = " << a << ", b = "
         << b << ", c = " << c << endl;

    swap(a, b, c);

    cout << "After swapping a = " << a << ", b = "
         << b << ", c = " << c << endl;

    return 0;
}
