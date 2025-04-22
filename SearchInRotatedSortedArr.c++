#include <iostream>
using namespace std;

int SearchInRotatedSortedArr(int arr[], int size, int target)
{

    int low = 0, high = size - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        // Check if left half is sorted
        if (arr[low] <= arr[mid])
        {
            if (arr[low] <= target && target <= arr[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else // Right half is sorted
        {
            if (arr[mid] <= target && target <= arr[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return -1; // Target not found
}

int main()
{
    int arr[] = {4, 5, 6, 7, 0, 1, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 0;

    int res = SearchInRotatedSortedArr(arr, size, target);
    if (res == -1)
    {
        cout << "Number not found in the array." << endl;
    }
    else
    {
        cout << target << " is found at " << res + 1 << " Position" << endl;
    }
}