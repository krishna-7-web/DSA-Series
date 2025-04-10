
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// Kadane's Algorithim Maximum Sum of Subarray
// Time Complexity: O(n)

int MaxSubArrSum(int arr[], int n)
{
    int maxSum = INT_MIN, currentSum = 0;

    for (int i = 0; i < n; i++)
    {
        currentSum += arr[i];
        maxSum = max(maxSum, currentSum);
        if (currentSum < 0)
        {
            currentSum = 0;
        }
    }
    cout << "Max Sum of Subarray: " << maxSum << endl;
}

int MaxSubArrSum2(int arr[], int n)
{

    int currSum = 0;
    int maxSum = INT_MIN;

    for (int st = 0; st < n; st++)
    {
        currSum = 0;
        for (int end = st; end < n; end++)
        {

            currSum = currSum + arr[end];
            maxSum = max(currSum, maxSum);
        }
    }
    cout << "Max Sum of Subarray: " << maxSum << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    MaxSubArrSum(arr, n);
    MaxSubArrSum2(arr, n);
}