#include <bits/stdc++.h>
using namespace std;
class animal
{
private:
    int a, b, c;

public:
    int d, e;
    void setData(int a1, int b2, int c3);
    void getData()
    {
        cout << "the value is a " << a << endl;
        cout << "the value is b " << b << endl;
        cout << "the value is c " << c << endl;
        cout << "the value is d " << d << endl;
        cout << "the value is e " << e << endl;
    }
};
void animal ::setData(int a1, int b2, int c3)
{
    a = a1;
    b = b2;
    c = c3;
}
int main()
{
    animal dog;
    dog.d = 5784;
    dog.e = 54564;
    dog.setData(1, 2, 3);
    dog.getData();
    return 0;
}