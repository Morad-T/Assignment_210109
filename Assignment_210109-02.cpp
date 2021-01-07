using namespace std;
#include <iostream>

int main()
{
    float i, sum = 0;
    for (i = 1; i <= 20; i++)
        sum = sum + 1 / i;
    cout << sum << endl;

    return 0;
}
