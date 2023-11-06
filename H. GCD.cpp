#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <vector>

#define ll  long long
#define Ragdha ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

// Function to calculate GCD using Euclidean algorithm
int gcd(int a, int b) 
{
    if (b == 0) 
    {
        return a;
    }
    return gcd(b, a % b);
}

int main() 
{
    Ragdha 

    int A, B;
    cin >> A >> B;

    // Calculate GCD using Euclidean algorithm
    int gcdValue = gcd(A, B);

    // Calculate LCM using the formula LCM(A, B) = (A * B) / GCD(A, B)
    ll lcmValue = (ll)(A / gcdValue) * B; // Use long long to prevent overflow

    // Output GCD and LCM separated by a space
    cout << gcdValue << " " << lcmValue << endl;

    return 0;
}
