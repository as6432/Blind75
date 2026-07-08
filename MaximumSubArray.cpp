//#include<iostream>
//using namespace std;
//
//// Time O(n) Space O(1)
//void findMaxSumOfSubArray(int arr[], int size)
//{
//	int maxSum = 0, preSum = 0;
//	for (int i = 0; i < size; i++)
//	{
//		if (preSum < 0)
//			preSum = 0;
//
//		preSum += arr[i];
//		if (preSum >= maxSum)
//			maxSum = preSum;
//	}
//
//	cout << "Max Sum of Sub Array: " << maxSum << endl;
//}
//
//// Time O(n) Space O(1)
//void findMaxSumWithStartAndEndIndexOfSubArray(int arr[], int size)
//{
//	int maxSum = 0, preSum = 0;
//	int start = 0, end = 0;
//	for (int i = 0; i < size; i++)
//	{
//		if (preSum < 0)
//		{
//			preSum = 0;
//			start = i;
//		}
//
//		preSum += arr[i];
//		if (preSum >= maxSum)
//		{
//			maxSum = preSum;
//			end = i;
//		}
//	}
//
//	cout << "Max Sum of Sub Array: "<<maxSum<<" From Position: "<< ++start <<" To "<< ++end << endl;
//}
//
//
//int main()
//{
//	//int iInputArr[]{-2,1,-3,4,-1,2,1,-5,4};
//	int iInputArr[]{ 5,4,-1,7,8 };	
//	int size = sizeof(iInputArr) / sizeof(iInputArr[0]);
//
//	// To find just Max sum of sub array
//	findMaxSumOfSubArray(iInputArr, size);
//
//	// To find max sum and sub array indexes
//	findMaxSumWithStartAndEndIndexOfSubArray(iInputArr, size);
//
//	return 0;
//}
//
