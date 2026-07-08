//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main()
//{
//	// TC O(n*m*l) 
//	// n is the number of characters in input string,
//	// m is the number of words and 
//	// l is max size of any word used to compare for matching
//	// SC O(n)
//	string str = "neetcode";
//	string word[]{"neet", "leet", "dode"};
//	const int size = str.length();
//	vector<bool> dp(size+1, false);
//	dp[size] = true;
//
//	for (int i = size - 1; i>= 0; i--)
//	{
//		for (string W : word)
//		{
//			int wSize = W.size();
//			if (i + wSize <= size && str.substr(i, wSize) == W)
//			{
//				dp[i] = dp[i + wSize];
//				break;
//			}
//		}
//	}
//
//	cout << "Is word break present : "<< boolalpha <<  dp[0] /*(dp[0] == false ? "false":"true")*/ << endl;
//
//	return 0;
//}
