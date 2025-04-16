#include <iostream>
#include <vector>
using namespace std;

// Brute Force Approach:
// Time Complexity: O(n^2)
// Space Complexity: O(1)

// vector<int> ProductOfArrExceptSelf(int arr[], int size)
// {
//     int left = 0, right = size - 1;
//     vector<int> result;

//     for (int i = 0; i < size; i++)
//     {
//         int product = 1;
//         for (int j = 0; j < size; j++)
//         {
//             if (i != j)
//             {
//                 product = product * arr[j];
//             }
//         }
//         result.push_back(product);
//     }
//     return result;
// }

// prefix and suffix approach:
// Time Complexity: O(n)
// Space Complexity: O(n)

vector<int> ProductOfArrExceptSelf(int arr[], int n)
{

    vector<int> ans(n, 1);
    vector<int> prefix(n, 1);
    vector<int> suffix(n, 1);

    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] * arr[i - 1];
    }

    for (int i = n - 2; i >= 0; i--)
    {
        suffix[i] = suffix[i + 1] * arr[i + 1];
    }

    for (int i = 0; i < n; i++)
    {
        ans[i] = prefix[i] * suffix[i];
    }

    return ans;
}

int main()
{
    int arr[] = {1, 2, 3, 4};

    // vector<int> arr = {1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    vector<int> res = ProductOfArrExceptSelf(arr, size);

    cout << "Product of array except self: ";
    for (int i = 0; i < size; i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;
}