#include <bits/stdc++.h>
using namespace std;
long long Ascii(string sumeet)
{
	long long prod = 1;

	for (int i = 0; i < sumeet.length(); i++) {
		prod *= (int)sumeet[i];
	}
	return prod;
}
int main()
{
	string sumeet;
    cin>>sumeet;

	cout << productAscii(sumeet);

	return 0;
}
