//#include<iostream>
//using namespace std;
//
// 
// // Time O(n) Space O(n)
//int main()
//{
//	int iInputArr[]{1,2,3,4};
//	int prefix = 1, postfix = 1;
//	const int size = sizeof(iInputArr) / sizeof(iInputArr[0]);
//	int iOutArr[size]{};
//
//	for (int i = 0; i < size; i++)
//	{
//		iOutArr[i] = prefix;
//		prefix *= iInputArr[i];		
//	}
//	 
//	for (int i = size-1; i >= 0; i--)
//	{
//		iOutArr[i] *= postfix;
//		postfix *= iInputArr[i];
//	}
//
//	cout << "Output Array: ";
//	for (int i = 0; i < size; i++)
//	{
//		cout << iOutArr[i] << " ";
//	}
//
//	return 0;
//}