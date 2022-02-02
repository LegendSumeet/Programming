#include <bits/stdc++.h>
using namespace std;
int bool oddeven(int number)
{
    return (number & 1) == 1;
}
int main()
{

    int number;
    cin >> number;
    oddeven(number);
   cout << "the number is" <<oddeven<< endl;
}
