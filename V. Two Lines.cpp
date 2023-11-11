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


int main()
{
    Ragdha

    // Input coordinates of the start and end points for two lines
    ll X1, Y1, X2, Y2;
    ll X3, Y3, X4, Y4;

    cin >> X1 >> Y1 >> X2 >> Y2;
    cin >> X3 >> Y3 >> X4 >> Y4;

    // Calculate slopes for each line
    ll slope1 = (Y2 - Y1) * (X4 - X3);
    ll slope2 = (Y4 - Y3) * (X2 - X1);

    // Check if slopes are approximately equal
    if (slope1 == slope2) 
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
