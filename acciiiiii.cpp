#include <bits/stdc++.h>
using namespace std;
long long Ascii(string sumeet)
{
    long long sumit = 1;
    for (int i = 0; i < sumeet.length(); i++)
    {
        sumit *= (int)sumeet[i];
    }
    return sumit;
}
int main()
{
    string sumeet;
    cout << "Enter the word" << endl;
    cin >> sumeet;
    cout<< sumeet << endl;
    cout << "The Ascii value is " << Ascii(sumeet) << endl;
    return 0;
}


