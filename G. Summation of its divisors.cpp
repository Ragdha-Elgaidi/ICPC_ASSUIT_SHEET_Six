#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <vector>

#define ll  long long
#define Ragdha ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

int main()
{
    Ragdha

    ll n,sum=0;

    cin >> n;

    for (int i = 1; i <= sqrt(n); i++ )
    {
        if (n % i == 0)
        {
            sum += i;
            if (i != sqrt(n))
            {
                sum +=n/i;
            }
        }
    }

    cout << sum;

    return 0;
}
