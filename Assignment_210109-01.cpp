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
	//cout << Factorial(20);// uncomment if and when the function brakes
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
