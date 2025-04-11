#include <iostream>
#include <algorithm>
using namespace std;

int frequency1(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        int freq = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                freq++;
            }
        }
        if (freq > (size / 2))
        {
            return arr[i];
        }
    }
}

// Optimize Algorithim when array is shorted

int frequency2(int arr[], int size)
{
    sort(arr, arr + size);
    int ans = arr[0], freq = 1;

    for (int i = 1; i < size; i++)
    {
        if (arr[i] == arr[i - 1])
        {
            freq++;
        }
        else
        {
            freq = 1;
            ans = arr[i];
        }
        if (freq > (size / 2))
        {
            return ans;
        }
    }
}

// Moore's Algorithim

int frequency3(int arr[], int size)
{

    int freq = 0, ans = 0;

    for (int i = 0; i < size; i++)
    {
        if (freq == 0)
        {
            ans = arr[i];
        }
        if (ans == arr[i])
        {
            freq++;
        }
        else
            freq--;
    }
    return ans;
}

int main()
{
    int arr[] = {2, 4, 2, 3, 2, 2, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Majority Element in array: " << frequency1(arr, size) << endl;
    cout << "Majority Element in array: " << frequency2(arr, size) << endl;
    cout << "Majority Element in array: " << frequency3(arr, size) << endl;
}