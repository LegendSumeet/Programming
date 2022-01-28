#include <iostream>
using namespace std;
class binary
{

public:
    string s;
    void read(void);
    void chkbin(void);
};

void binary::read(void)
{
    cout << "enter the number" << endl;
    cin >> s;
}

void binary::chkbin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "not vaild" << endl;
            exit(0);
        }
    }
}

int main()
{
    binary b;
    b.read();
    b.chkbin();
    return 0;
}



