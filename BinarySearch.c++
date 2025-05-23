#include <iostream>
using namespace std;

int BinarySearch(int arr[], int size, int num)
{
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == num)
        {
            return mid;
        }
        else if (arr[mid] < num)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[5], num;

    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Enter 5 numbers in sorted order: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the number to search: ";
    cin >> num;

    int res = BinarySearch(arr, size, num);

    if (res == -1)
    {
        cout << "Number not found in the array." << endl;
    }
    else
    {
        cout << num << " is found at " << res + 1 << " Position" << endl;
    }
    return 0;
}
