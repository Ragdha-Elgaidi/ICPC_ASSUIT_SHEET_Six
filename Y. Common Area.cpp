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

	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t) 
	{
		int N;
		cin >> N;

		int maxX1 = -INT_MAX, minX2 = INT_MAX;
		int maxY1 = -INT_MAX, minY2 = INT_MAX;

		for (int i = 0; i < N; ++i)
		{
			int x1, y1, x2, y2;
			cin >> x1 >> y1 >> x2 >> y2;

			maxX1 = max(maxX1, x1);
			minX2 = min(minX2, x2);
			maxY1 = max(maxY1, y1);
			minY2 = min(minY2, y2);
		}

		// Calculate the common area
		int commonArea = max(0, minX2 - maxX1) * max(0, minY2 - maxY1);

		cout << "Case #" << t << ": " << commonArea << endl;
	}

	return 0;
}
