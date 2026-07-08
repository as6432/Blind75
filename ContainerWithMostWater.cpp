//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//// TC O(n) SC O(1)
//int main()
//{
//	vector<int> arr{ 1, 8, 6, 2, 5, 4, 8, 3, 7 };
//
//	// TC O(n) SC O(1)
//	int L = 0, R = arr.size() - 1, res = 0;
//
//	while (L < R)
//	{
//		int area = (R - L) * min(arr[L], arr[R]);
//		res = max(area, res);
//		arr[L] <= arr[R] ? L++ : R--;
//	}
//
//	cout << "Container with most water is: " << res << endl;
//	return 0;
//}
