#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    long long n;
    cin >> n;

    if (n == 1)
    {
        cout << "NO";
        return 0;
    }

    int m = sqrt(n);

    for (int i = 2; i <= m; i++)
    {
        if (n % i == 0)
        {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
    return 0;
}
