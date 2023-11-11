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

    // Input the three sides of the triangle
    double A, B, C;
    cin >> A >> B >> C;

    // Check if the sides satisfy the Triangle Inequality Theorem
    if (A + B > C && B + C > A && A + C > B)
    {
        // Calculate the semi-perimeter
        double s = (A + B + C) / 2;

        // Calculate the area using Heron's formula
        double area = sqrt(s * (s - A) * (s - B) * (s - C));

        // Output "Valid" and the area with fixed precision
        cout << "Valid\n" << fixed << setprecision(6) << area << endl;
    }
    else {
        // Output "Invalid"
        cout << "Invalid\n";
    }

    return 0;
}
