#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <vector>

#define ll  long long
#define Ragdha ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

long long sum(long long n)
{
    return n * (n + 1) / 2;
}

int main()
{
    Ragdha

    ll num1, num2, c;
    cin >> num1 >> num2 >> c;

    ll ma = max(num1, num2);
    ll mi = min(num1, num2);

    // Calculate the multiples of c within the range [mi, ma]
    ll firstMultiple = (mi + c - 1) / c;
    ll lastMultiple = ma / c;

    cout << firstMultiple << " " << lastMultiple << endl;
    // Calculate the sum of multiples within the range using the arithmetic series formula
    ll result = (sum(lastMultiple) - sum(firstMultiple - 1)) * c;

    cout << sum(lastMultiple) << " " << sum(firstMultiple-1) << endl;
    cout << result << endl;

    return 0;
}
