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

ll num(char c)
{ 
	if (c >= '0' && c <= '9')
	{
		return c - '0';
	}
	else
	{

		return c - 'A' + 10;
	}
}

char reNum(ll num)
{ 
	if (num >= 0 && num <= 9) 
	{
		return num + '0';
	}
	else
	{
		return num + 'A' - 10; 
	}
}

ll toDec(char* value, ll base)
{
	ll size = strlen(value);
	ll power = 1; 
	ll result = 0;

	for (int i = size - 1; i >= 0; i--)
	{ 
		result += num(value[i]) * power;  
		power *= base;
	}

	return result;
}

char* fromDec(char res[], ll base, ll number)
{
	int index = 0; 

	while (number > 0)
	{
		res[index++] = reNum(number % base);
		number /= base;
	} 

	res[index] = '\0';
	reverse(res, res + index);

	return res;
}

int main()
{
	Ragdha

	int ca;
	cin >> ca;

	if (ca == 1)
	{
		char arr[35] = { "" };
		cin >> arr;

		ll base;
		cin >> base;

		cout << toDec(arr, base);
	}
	else
	{
		ll number, base;
		cin >> number >> base;

		char res[100];
		cout << fromDec(res, base, number);
	}

	return 0;
}
