#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    long long  x; 
    cin >> x;
    
    int count_bits = 0;

    while (x > 0)
    {
        count_bits += x & 1;
        x >>= 1;
    }
   

    if (count_bits==1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
