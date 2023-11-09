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

string add(const string& num1, const string& num2) 
{
    string result = "";
    int carry = 0;
    int i = num1.size() - 1;
    int j = num2.size() - 1;

    while (i >= 0 || j >= 0 || carry) 
    {
        int x = (i >= 0) ? num1[i] - '0' : 0;
        int y = (j >= 0) ? num2[j] - '0' : 0;
        int sum = x + y + carry;

        carry = sum / 10;
        sum %= 10;
        result = to_string(sum) + result;
        i--;
        j--;
    }

    return result;
}

string multiply(const string& num, int digit)
{
    string result = "";
    int carry = 0;

    for (int i = num.size() - 1; i >= 0; i--) 
    {
        int product = (num[i] - '0') * digit + carry;

        carry = product / 10;
        product %= 10;
        result = to_string(product) + result;
    }

    while (carry > 0) 
    {
        result = to_string(carry % 10) + result;
        carry /= 10;
    }

    return result;
}

int main()
{
    Ragdha 

    string N;
    cin >> N;

    string additionResult = add(N, "9999");
    string multiplicationResult = multiply(N, 9999);

    cout << additionResult << endl;
    cout << multiplicationResult << endl;

    return 0;
}
