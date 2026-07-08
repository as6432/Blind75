//#include<iostream>
//#include<map>
//#include<algorithm>
//using namespace std;
//
// // Time O(nlogn) Space O(1)
//bool findDuplicateUsingSorting(int arr[], int size)
//{
//	sort(arr, arr + size);
//	for (int i = 0; i < size - 1; i++)
//	{
//		if (arr[i] == arr[i + 1])
//			return true;
//	}
//	
//	return false;
//}
//
// // Time O(n) Space O(n)
//bool findDuplicateUsingMap(int arr[], int size)
//{
//	map<int, int> mStore{};
//	for (int i = 0; i < size; i++)
//	{
//		if (mStore.find(arr[i]) != mStore.end())
//			return true;
//		else
//			mStore.insert(pair<int, int>(arr[i], 0));
//	}
//
//	return false;
//}
//
//int main()
//{
//	int iInput[]{1,2,3,1};	
//	int size = sizeof(iInput) / sizeof(iInput[0]);
//
//	// Time: O(NLogN) space: O(1)
//	cout << "Contain Duplicate: "<< (findDuplicateUsingSorting(iInput, size) ? "Yes":"No") << endl;
//
//	// Time: O(N) space: O(n)
//	cout << "Contain Duplicate: " << (findDuplicateUsingMap(iInput, size) ? "Yes" : "No") << endl;
//
//	return 0;
//}