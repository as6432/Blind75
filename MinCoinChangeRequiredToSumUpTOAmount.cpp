//#include<iostream>
//using namespace std;
//
//int main()
//{
//	// TC O(amount*sizeof(coins)) SP O(amount+1) ~ O(amount)
//	const int amount = 7;
//	int coins[]{1, 3, 4, 5};
//	int dp[amount + 1] = {};				// We need to cache values from 1 to amount
//	fill_n(dp+1, amount + 1, INT_MAX);      // Fill all array element with INT_MAX except 0 index
//
//	for (int a = 1; a <= amount; a++)
//	{
//		for(int c : coins)
//		{
//			if (a - c >= 0)									// Valid only if positive or 0 value
//				dp[a] = min(dp[a], (1 + dp[a - c]));        // Min of cached value and 1 + value found previously
//		}
//	}
//
//	int minCoins = (dp[amount] != INT_MAX ? dp[amount] : -1); // If cache value is equal to INT_MAX then coins not found for amount
//
//	if (minCoins == -1)
//		cout << "Coin change is not present" << endl;
//	else
//		cout << "Minimum coin change required is: " << minCoins << endl;
//
//	return 0;
//}
