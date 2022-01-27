#include <iostream>

using namespace std;

int main()
{
    int firstNumber,
        secondNumber, sumOfTwoNumbers;

    cout << "Enter two integers: ";

    cin >> firstNumber >> secondNumber;

    sumOfTwoNumbers = firstNumber + secondNumber;

    cout << firstNumber << " + " << secondNumber << " = " << sumOfTwoNumbers << endl;

    return 0;
}
