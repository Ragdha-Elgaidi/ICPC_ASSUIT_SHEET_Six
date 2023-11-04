#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    long long a, b, n;
    cin >> a >> b >> n;

    if (n % 3 == 0)
    {
        cout << (a ^ b) << endl;
    }
    else if (n % 3 == 1)
    {
        cout << a << endl;
    }
    else if (n % 3 == 2)
    {
        cout << b << endl;
    }
}
