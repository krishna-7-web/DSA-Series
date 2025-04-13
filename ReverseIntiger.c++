#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int x = 123, rev = 0;

    while (x > 0)
    {
        int rem = x % 10;
        if (rev > INT_MAX / 10 || rev > INT_MAX / 10 && rem > 7)
            return 0;
        if (rev < INT_MIN / 10 || rev < INT_MIN / 10 && rem < -8)
            return 0;
        rev = rev * 10 + rem;
        x /= 10;
    }
    cout << "Result: " << rev << endl;
    return 0;
}