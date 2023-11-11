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

	ll x1, y1, x2, y2, x3, y3, x4, y4;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

	ll mi_x = min(min(x1, x2), min(x3, x4));
	ll ma_x = max(max(x1, x2), max(x3, x4));
	ll mi_y = min(min(y1, y2), min(y3, y4));
	ll ma_y = max(max(y1, y2), max(y3, y4));
	ll points;

	cin >> points;
	for (int i = 0; i < points; i++)
	{
		ll x, y;
		cin >> x >> y;

		if (x >= mi_x && x <= ma_x && y >= mi_y && y <= ma_y)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	return 0;
}
