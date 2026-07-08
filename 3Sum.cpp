//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//// TC O(n2) SC O(1)
//int main()
//{
//	//vector<int> arr{-3, 4, -3, 1, 2, 3};
//	//vector<int> arr{-1, 0, 1, 2, -1, -4};
//	vector<int> arr{ -2, -2, 0, 0, 2, 2 };
//	sort(arr.begin(), arr.end());
//	vector<vector<int>> result;
//
//	for (int i = 0; i < arr.size(); i++)
//	{
//		if (i > 0)
//			if (arr[i] == arr[i - 1])
//				continue;
//
//		int l = i + 1, r = arr.size() - 1;
//		int target = -arr[i];
//
//		while (l < r)
//		{
//			int sum = arr[l] + arr[r];
//			if (sum < target)
//				l++;
//			else if (sum > target)
//				r--;
//			else
//			{
//				result.push_back({ arr[i], arr[l], arr[r] });
//
//				// Here we have to update the L and R value as we need to find all triplets otherwise we will get duplicate triplets
//				// We update just L value also check if there any duplicate value at new L
//				// If present then we keep on updating L value still gets unique value
//				l++;
//				while (arr[l] == arr[l - 1] && l < r)
//				{
//					l++;
//				}
//			}
//		}
//	}
//
//	if (result.size() != 0)
//	{
//		cout << "Result is:" << endl;
//		for (int i = 0; i < result.size(); i++)
//			cout << result[i][0] << " " << result[i][1] << " " << result[i][2] << endl;
//	}
//	else
//		cout << "\nNo combination found" << endl;
//
//	return 0;
//}
