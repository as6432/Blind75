//#include<iostream>
//using namespace std;
//
//// Time O(logn) space O(1)
//int main()
//{
//	int arr[]{4,5,6,7,0,1,2};
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int l = 0, r = size - 1;
//	int target = 0, index = -1;
//
//	while (l <= r)
//	{
//		int m = (l + r) / 2;
//		if (arr[m] == target)
//		{
//			index = m;
//			break;
//		}
//
//		// Left Sorted Array
//		if (arr[l] <= arr[m])
//		{
//			if (target > arr[m] or target < arr[l])
//				l = m + 1;
//			else
//				r = m - 1;
//		}
//		// Right Sorted Array
//		else
//		{
//			if (target < arr[m] or target > arr[r])
//				r = m - 1;
//			else
//				l = m + 1;
//		}
//	}
//
//	if (index != -1)
//		cout << "Number " << target << " Found at index: " << index << endl;
//	else
//		cout << "Number not Found in array: " << endl;
//
//	return 0;
//}