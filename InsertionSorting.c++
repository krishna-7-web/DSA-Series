#include <iostream>
using namespace std;

void InsertionSort()
{
    int arr[] = {4, 2, 8, 5, 6, 7, 1, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 1; i < size; i++)
    {
        int curr = arr[i];
        int prev = i - 1;

        while (prev >= 0 && arr[prev] > curr)
        {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = curr;
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    InsertionSort();

    return 0;
}