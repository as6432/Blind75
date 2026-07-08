//#include<iostream>
//using namespace std;
//
//int main()
//{
//	// TC O(m*n) SC O(m*n)
//
//	string text1 = "abcde";
//	string text2 = "ace";
//	int dp[6][4] = { {0} };
//
//	for (int i = text1.size() - 1; i >= 0; i--)
//	{
//		for (int j = text2.size() - 1 ; j >= 0; j--)
//		{
//			if (text1[i] == text2[j])					// If matches then update the value by 1 plus diagonal value of next position
//				dp[i][j] = 1 + dp[i + 1][j + 1];
//			else
//				dp[i][j] = max(dp[i][j+1], dp[i+1][j]);  // get the max of right and below position
//		}
//	}
//
//	cout << "Longest common sequence size is: " << dp[0][0] << endl;  
//	return 0;
//}
//
