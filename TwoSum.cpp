//#include<iostream>
//#include<map>
//using namespace std;
// 
//// Time O(n) Space O(n)
//int main()
//{
//	int arrInput[] = {2,7,8,3};
//	int iTarget = 10;
//	map<int, int> mStore{};
//
//	for (int i = 0; i < sizeof(arrInput)/sizeof(int); i++)
//	{
//		if (mStore.find(iTarget - arrInput[i]) != mStore.end())
//		{
//			cout << "Indexes are: " << mStore.at((iTarget - arrInput[i])) << " " << i;
//			return 0;
//		}
//		else
//			mStore.insert(pair<int, int>(arrInput[i], i));
//	}
//
//	cout <<"Target not found";
//	return 0;
//}