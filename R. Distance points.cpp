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

    double X1, Y1, X2, Y2;
    cin >> X1 >> Y1 >> X2 >> Y2;

    // Calculate the distance using the distance formula
    double distance = sqrt((X2 - X1) * (X2 - X1) + (Y2 - Y1) * (Y2 - Y1));

    // Print the result with 9 decimal places
    cout << fixed << setprecision(9) << distance << endl;

    return 0;
}
