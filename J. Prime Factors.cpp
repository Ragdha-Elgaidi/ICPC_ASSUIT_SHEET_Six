#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <vector>

#define ll  long long
#define Ragdha ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

int main()
{
	Ragdha

	ll num;

	cin >> num;

	int flag = 0;

	for (int i = 2; i <= sqrt(num); i++)
	{
		int counter = 0;

		while (num % i == 0)
		{
			counter++;
			num /= i;
		}

		if (counter > 0 && flag > 0)
		{
			cout << "*";
		}

		if (counter > 0)
		{
			cout << "(" << i << "^" << counter << ")";
			flag = 1;
		}

		if (num == 1)
		{
			break;
		}
	}

	if (num > 1 && flag)
	{
		cout << "*";
	}

	if (num > 1)
	{
		cout << "(" << num << "^" << 1 << ")";
	}

	return 0;
}
