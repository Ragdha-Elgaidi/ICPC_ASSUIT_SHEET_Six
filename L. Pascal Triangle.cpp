#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <vector>

#define ll  long long
#define Ragdha ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

const int MAXN = 30;

int main()
{
    Ragdha

    int N;
    cin >> N;

    // Pascal's triangle array
    int pascal[MAXN][MAXN];

    // Generating Pascal's triangle
    for (int i = 0; i < N; ++i)
    {
        pascal[i][0] = pascal[i][i] = 1;

        for (int j = 1; j < i; ++j) 
        {
            pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
        }
    }

    // Printing Pascal's triangle
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j <= i; ++j)
        {
            cout << pascal[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
