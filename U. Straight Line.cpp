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
    // Input three points
    int X1, Y1, X2, Y2, X3, Y3;
    cin >> X1 >> Y1 >> X2 >> Y2 >> X3 >> Y3;

    // Calculate slopes between pairs of points
    int slope1 = (Y2 - Y1) * (X3 - X2);
    int slope2 = (Y3 - Y2) * (X2 - X1);

    // Check if slopes are equal
    if (slope1 == slope2)
    {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}
