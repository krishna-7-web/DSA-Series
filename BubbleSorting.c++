#include <iostream>
using namespace std;

int main()
{
    int arr[] = {4, 1, 3, 2, 6, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }

        cout << arr[i] << " ";
    }

    return 0;
}