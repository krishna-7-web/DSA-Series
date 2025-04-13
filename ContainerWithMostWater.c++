#include <iostream>
using namespace std;

// Bruteforce Algoriyhim
int containerWithMostWater1(int heights[], int size)
{
    int ht, wt, currentWater, maxWater = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            ht = min(heights[i], heights[j]);
            wt = j - i;
            currentWater = ht * wt;
            maxWater = max(maxWater, currentWater);
        }
    }
    return maxWater;
}

// Optimal Approch (2 Pointer)
int containerWithMostWate2(int heights[], int size)
{
    int maxWater = 0;
    for (int i = 0; i < size; i++)
    {
        int left = 0, right = size - 1;
        if (heights[left] < heights[right])
        {
            left++;
        }
        else
        {
            right--;
        }
        int ht = min(heights[left], heights[right]);
        int wt = right - left;
        int currentWater = ht * wt;
        maxWater = max(maxWater, currentWater);
    }
    return maxWater;
}

int main()
{

    int heights[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int size = sizeof(heights) / sizeof(heights[0]);

    int res1 = containerWithMostWater1(heights, size);
    int res2 = containerWithMostWate2(heights, size);

    cout << "Result: " << res1 << endl;
    cout << "Result: " << res2 << endl;
}