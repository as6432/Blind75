//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//int main()
//{
//	// TC O(n2) SP O(n)
//	int numbers[]{ 2, 6, 8, 3, 4, 5, 1 };
//	const int size = sizeof(numbers) / sizeof(numbers[0]);
//	int LIS[size]{};
//	fill_n(LIS, size, 1);
//
//	for (int i = size-1; i >= 0; i--)
//	{
//		for (int j = i + 1; j < size; j++)                 
//		{
//			if(numbers[i] < numbers[j])						// Previous index value should be lesss than the current index value to get increasing sequence
//				LIS[i] = max(LIS[i], (1 + LIS[j]));         
//		}
//	}
//
//	cout << "Longest Increasing SubSequence Size is: "<< *max_element(LIS, LIS + size) << endl;
//
//
//
//	// TC O(nlogn) SC O(n)       Greedy with Binary Search
//	vector<int> nums{ 2, 6, 8, 3, 4, 5, 1 };
//	vector<int> sub;
//
//	for (int x : nums)
//	{
//		if (sub.empty() || sub[sub.size() - 1] < x)                // Continue to push element in sub sequence util it greater than last elemenet of sub sequence
//			sub.push_back(x);
//		else
//		{
//			auto itr = lower_bound(sub.begin(), sub.end(), x);     // Find out the first greater element than or equal to from sub sequence
//			*itr = x;                                              // and replace that element with x
//		}
//	}
//
//	cout << "Longest Increasing SubSequence Size is: " << sub.size() << endl;
//
//	return 0;
//}
