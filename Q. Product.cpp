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

    int L, R, M;
    cin >> L >> R >> M;

    ll result = 1; // Initialize result to 1 to hold the product

    // Iterate through the numbers from L to R (inclusive)
    for (int i = L; i <= R; i++) 
    {
        // Multiply the current number with the result and take the modulo M
        result = (result * i) % M;
    }

    // Output the final result
    cout << result << endl;

    return 0;
}
