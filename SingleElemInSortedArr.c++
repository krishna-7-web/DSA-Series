#include <iostream>
using namespace std;

int findDistinctElemInArr1(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        if (arr[i - 1] != arr[i] && arr[i + 1] != arr[i])
        {
            return arr[i];
        }
    }
    return -1;
}

int findDistinctElemInArr2(int arr[], int size)
{

    int low = 0, high = size - 1;

    if (size == 1)
        return arr[0];

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (mid == 0 && arr[0] != arr[1])
            return arr[mid];
        if (mid == size - 1 && arr[size - 1] != arr[size - 2])
            return arr[mid];

        if (arr[mid - 1] != arr[mid] && arr[mid] != arr[mid + 1])
        {
            return arr[mid];
        }

        if (mid % 2 == 0)
        {
            if (arr[mid - 1] == arr[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else
        {
            if (arr[mid - 1] == arr[mid])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{

    // int arr[] = {3, 3, 7, 7, 10, 11, 11, 8, 8};
    int arr[] = {1, 1, 2, 2, 3, 3, 4, 8, 8};
    // int arr[] = {1, 1, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    int res1 = findDistinctElemInArr1(arr, size);
    int res2 = findDistinctElemInArr2(arr, size);

    cout << "Result: " << res1 << endl;
    cout << "Optimal Approch: " << endl;
    cout << "Result: " << res2 << endl;
}