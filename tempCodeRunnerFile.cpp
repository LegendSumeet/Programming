#include <iostream>

using namespace std;

int main()
{

    int f, s, add, sub, mul;
    float div;
    cout << "Enter two integers: ";

    cin >> f >> s;

    add = f + s;
    sub = f - s;
    mul = f * s;
    div = f / (float)s;
    cout << f << " + " << s << " = " << add << endl;
    cout << f << " - " << s << " = " << sub << endl;
    cout << f << " * " << s << " = " << mul << endl;
    cout << f << " / " << s << " = " << div << endl;

    return 0;
}