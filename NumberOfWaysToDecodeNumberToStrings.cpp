//#include<iostream>
//#include<vector>
//using namespace std;
//
//// TC O(n) SC(1)
//int main()
//{
//	string s = "226";
//	vector<int> dp(2, 1);
//
//	if (s[0] == '0' || s.size() == 0)
//	{
//		dp[1] = 0;
//	}
//	else
//	{
//		for (int i = 1; i < s.size(); i++)
//		{
//			int ways = 0;
//
//			if (s[i] != '0')
//				ways += dp[1];
//
//			if (s[i - 1] == '1' || (s[i - 1] == '2' && s[i] <= '6'))
//				ways += dp[0];
//
//			dp[0] = dp[1];
//			dp[1] = ways;
//		}
//	}	
//
//	cout << "Number of ways to decode are: " << dp[1] << endl;
//	return 0;
//}