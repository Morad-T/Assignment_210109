// Assignment_210109-01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

using namespace std;
#include <iostream>
#include <cmath>
#include <iomanip>



unsigned long long int Factorial(int n)
{
	unsigned long long int F = 1;
	for (int i = n; i > 1; i--)
		F = F * i;
	return F;
}

int main()
{
	//cout << Factorial(20); uncomment if and when the function brakes
	long double x, sum = 0;
	unsigned long long int S;
	int i;
	cin >> x;
	//cout << tgamma(5+1);
	for (i = 1; i <= 25; i++)
		sum = sum + pow(x, i) / Factorial(i);
	cout << setprecision(53) << sum << endl;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
