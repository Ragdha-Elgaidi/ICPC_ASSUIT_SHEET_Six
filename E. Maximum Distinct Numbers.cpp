
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <iomanip>

#define ll  long long

using namespace std;

int main()
{
    ll num;
    cin >> num;

    ll k = (-1 + sqrt(1 + 8 * num)) / 2;
    cout << k << endl;

    return 0;
}

