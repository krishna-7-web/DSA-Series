#include <iostream>
using namespace std;

int main()
{

    int arr[] = {4, 2, 7, 6, 3, 1, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        int smallestElemntIdx = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[smallestElemntIdx])
            {
                smallestElemntIdx = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[smallestElemntIdx];
        arr[smallestElemntIdx] = temp;

        cout << arr[i] << " ";
    }
    return 0;
}