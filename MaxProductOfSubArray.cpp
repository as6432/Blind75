//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//// Time O(n) space O(1)
//int main()
//{
//	int iInputArr[] { -2, 0, -1, -4};	// output 4
//	//int iInputArr[]{ -2, 0, -1};		// Ouput 0
//	int size = sizeof(iInputArr) / sizeof(iInputArr[0]);
//	int preMaxSum = 0, preMinSum = 0, maxProduct = *max_element(iInputArr, iInputArr + size);
//
//	for (int n : iInputArr)
//	{
//		if (n == 0)
//		{
//			preMaxSum = preMinSum = 1;
//			continue;
//		}
//		
//		int temp = preMaxSum * n;
//		preMaxSum = max(max(n * preMaxSum, n * preMinSum), n);
//		preMinSum = min(min(temp, n * preMinSum), n);
//		maxProduct = max(maxProduct, preMaxSum);
//	}
//
//	cout << "Max Product of Sub Array: " << maxProduct << endl;
//	return 0;
//}