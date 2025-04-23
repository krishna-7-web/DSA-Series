#include <iostream>
#include <limits.h>
using namespace std;

// Brute Force Approach
// Time Complexity: O(n)
int peakElem;
int peakIndexInMountainArray(int arr[], int arrSize)
{
    for (int i = 1; i < arrSize; i++)
    {
        if (arr[i - 1] < arr[i] && arr[i + 1] < arr[i])
        {
            peakElem = arr[i];
            return i;
        }
    }
    return -1;
}

// Optimized Approach (Binary Search)
// Time Complexity: O(log n)
int peakIndexInMountainArrayOptimized(int arr[], int arrSize)
{
    int start = 1, end = arrSize - 2;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid - 1] < arr[mid] && arr[mid + 1] < arr[mid])
            return mid;

        else if (arr[mid - 1] < arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {0, 3, 8, 9, 5, 2};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    int peakIndex1 = peakIndexInMountainArray(arr, arrSize);
    int peakIndex2 = peakIndexInMountainArrayOptimized(arr, arrSize);

    cout << "Peak Index: " << peakIndex1 << endl;
    cout << "Peak Element: " << peakElem << endl;

    cout << "Optimized Peak Index: " << peakIndex2 << endl;

    return 0;
}