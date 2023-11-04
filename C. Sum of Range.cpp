#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

long long sumOfAllNumbers(long long A, long long B)
{
    return (B - A + 1) * (A + B) / 2;
}

long long sumOfEvenNumbers(long long A, long long B)
{
    long long firstEven = (A % 2 == 0) ? A : A + 1;
    long long lastEven = (B % 2 == 0) ? B : B - 1;

    return ((lastEven - firstEven) / 2 + 1) * (firstEven + lastEven) / 2;
}

long long sumOfOddNumbers(long long A, long long B)
{
    long long firstOdd = (A % 2 == 1) ? A : A + 1;
    long long lastOdd = (B % 2 == 1) ? B : B - 1;

    return ((lastOdd - firstOdd) / 2 + 1) * (firstOdd + lastOdd) / 2;
}

int main()
{
    long long a, b;
    cin >> a >> b;

    long long A = min(a, b), B = max(a, b);

    cout << sumOfAllNumbers(A, B) << endl;
    cout << sumOfEvenNumbers(A, B) << endl;
    cout << sumOfOddNumbers(A, B) << endl;

    return 0;
}
