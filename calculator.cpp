#include <iostream>
using namespace std;

int main()
{
    string season;
    cout << "Enter any month(" << endl;

    int entry;
    cin >> entry;
    switch (entry)
    {
    case 12:
    case 1:
    case 2:
        season = "Winter";
        break;
    case 3:
    case 4:
    case 5:
        season = "summer";
        break;
    case 6:
    case 7:
    case 8:
        season = "monsoon (rainy)";
        break;
    case 9:
    case 10:
    case 11:
        season = "post-monsoon period";
        break;
    default:
        season = "thank you go";
    }
    cout << "The season is " << season << endl;

    return 0;
}