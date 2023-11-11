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

    ll r, s;
    cin >> r >> s;

    if (s >= r * 2) 
    {
        cout << "Square" << endl;
    }
    else if (r * 2 > sqrt(pow(s, 2) + pow(s, 2))) 
    {
        cout << "Circle" << endl;
    }
    else 
    {
        cout << "Complex" << endl;
    }
    return 0;
}
