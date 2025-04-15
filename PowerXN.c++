#include <iostream>
using namespace std;

double power(double x, int n)
{
    long binaryForm = n;

    if (n < 0)
    {
        x = 1 / x;
        binaryForm = -binaryForm;
    }

    double ans = 1;
    while (binaryForm > 0)
    {
        if (binaryForm % 2 == 1)
        {
            ans = ans * x;
        }
        x = x * x;
        binaryForm = binaryForm / 2;
    }
    return ans;
}
int main()
{
    double x = 2, n = 3;

    double result = power(x, n);
    cout << "Result: " << result;
}