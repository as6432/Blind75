//#include<iostream>
//using namespace std;
//
//// Time O(logn) space O(1)
//int main()
//{
//	int arr[]{ 23, 56, 11, 18, 22 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int l = 0, r = size - 1;
//	int result = arr[0];
//
//	while (l <= r)
//	{
//		if (arr[l] < arr[r])
//		{
//			result = min(result, arr[l]);
//			break;
//		}
//
//		int m = ((l + r) / 2);
//		result = min(result, arr[m]);
//
//		if (arr[m] >= arr[l])
//			l = m + 1;
//		else
//			r = m - 1;
//	}
//
//	cout << "Minimum from subarray : " << result;
//	return 0;
//}
