#include <iostream>
#include <vector>
using namespace std;

vector<int> PairSum(int arr[], int n, int target)
{
    vector<int> result;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                result.push_back(arr[i]);
                result.push_back(arr[j]);
                return result; // Return the first pair found
            }
        }
    }
    return result; // Return empty vector if no pair found
}

vector<int> TwoPointerPairSum(int arr[], int n, int target)
{

    vector<int> result;

    int left = 0, right = n - 1;

    while (left < right)
    {
        int pairSum = arr[left] + arr[right];

        if (pairSum > target)
        {
            right--;
        }
        else if (pairSum < target)
        {
            left++;
        }

        else if (pairSum == target)
        {
            result.push_back(arr[left]);
            result.push_back(arr[right]);
            return result;
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5}, target = 7;
    int n = sizeof(arr) / sizeof(arr[0]);

    vector<int> ans = PairSum(arr, n, target);
    vector<int> ans2 = TwoPointerPairSum(arr, n, target);

    cout << "Pairs are " << ans[0] << " and " << ans[1] << endl;
    cout << "Using Two Pointer Pair Sum " << endl;
    cout << "Pairs are " << ans[0] << " and " << ans[1] << endl;
}