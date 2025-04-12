#include <iostream>
using namespace std;

int BuyOrSell(int prices[], int n)
{
    int bestBuy = prices[0], maxProfit = 0;

    for (int i = 1; i < n; i++)
    {
        if (bestBuy < prices[i])
        {
            maxProfit = max(maxProfit, prices[i] - bestBuy);
        }
        bestBuy = min(bestBuy, prices[i]);
    }
    return maxProfit;
}

int main()
{
    int prices[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(prices) / sizeof(prices[0]);

    int result = BuyOrSell(prices, n);

    cout << "Max Profit: " << result;
}