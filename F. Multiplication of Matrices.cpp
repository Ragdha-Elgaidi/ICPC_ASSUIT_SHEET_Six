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

    int RA, CA, RB, CB;
    cin >> RA >> CA;

    vector<vector<int>> A(RA, vector<int>(CA));

    // Read matrix A
    for (int i = 0; i < RA; ++i)
    {
        for (int j = 0; j < CA; ++j)
        {
            cin >> A[i][j];
        }
    }

    cin >> RB >> CB;

    vector<vector<int>> B(RB, vector<int>(CB));

    // Read matrix B
    for (int i = 0; i < RB; ++i) 
    {
        for (int j = 0; j < CB; ++j)
        {
            cin >> B[i][j];
        }
    }

    // Initialize the result matrix with zeros
    vector<vector<int>> result(RA, vector<int>(CB, 0));

    // Perform matrix multiplication
    for (int i = 0; i < RA; ++i)
    {
        for (int j = 0; j < CB; ++j)
        {
            for (int k = 0; k < CA; ++k)
            {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Output the result matrix
    for (int i = 0; i < RA; ++i) 
    {
        for (int j = 0; j < CB; ++j)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
