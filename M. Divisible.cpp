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

	string num1;
	int num2;  

	cin >> num1 >> num2;

	ll res = 0;

	for (int i = 0; i < num1.size(); i++)
	{ 
		res *= 10;
		res += num1[i] - '0';
		res %= num2;
	}

	if(res == 0) 
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}

	return 0;
}
