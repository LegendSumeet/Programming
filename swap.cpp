#include <iostream>
using namespace std;

int main()
{
    int a, b, temp;
    cout << "Enter the Numbers" << endl;
    cin >> a >> b;

    cout << "The numbers" << endl;
    cout << "a = " << a << " b = " << b << endl;

    temp = a;
    a = b;
    b = temp;

    cout << "After swapping the given numbers." << endl;
    cout << "a = " << a << " b = " << b << endl;

    return 0;
}
