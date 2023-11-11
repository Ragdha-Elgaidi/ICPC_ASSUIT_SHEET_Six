#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <vector>
#include <string.h>

#define ll  long long
#define Ragdha ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

const int MAX_POINTS = 1000;

int main()
{
    Ragdha

    ll xAxes[MAX_POINTS];
    ll yAxes[MAX_POINTS];
    ll x, y, R, points;

    cin >> x >> y >> R >> points;

    for (int i = 0; i < points; i++) 
    {
        cin >> xAxes[i] >> yAxes[i];
    }

    for (int i = 0; i < points; i++)
    {
        ll x1 = x - xAxes[i];
        ll y1 = y - yAxes[i];
        double result = sqrt(pow(x1, 2) + pow(y1, 2));

        if (result > R) 
        {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
        }
    }

    return 0;
}
