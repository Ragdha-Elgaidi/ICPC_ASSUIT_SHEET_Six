#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <vector>

#define ll  long long
#define Ragdha ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

// Function to calculate factorial
ll factorial(int n) 
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() 
{
    Ragdha

    ll A, B;
    cin >> A >> B;

    // Calculate nCr and nPr using the formulas
    ll nCr = factorial(A) / (factorial(B) * factorial(A - B));
    ll nPr = factorial(A) / factorial(A - B);

    // Output the results separated by a space
    cout << nCr << " " << nPr << endl;

    return 0;
}
