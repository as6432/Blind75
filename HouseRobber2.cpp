//#include<iostream>
//using namespace std;
//
//// TC O(n) SC O(1)
//int rob(int house[], int startIndex, int size)
//{
//	int previousToPreviousRobbery = 0, previousRobbery = 0;
//
//	for (int i = startIndex; i < size; i++)
//	{
//		int newRob = max(house[i] + previousToPreviousRobbery, previousRobbery);
//		previousToPreviousRobbery = previousRobbery;
//		previousRobbery = newRob;
//	}
//
//	return previousRobbery;
//}
//
//int main()
//{
//	int house[]{ 1,2,3,1 };
//	int size = sizeof(house) / sizeof(house[0]);
//	
//	//int maxAmountRobbed = 0;
//	//if (size == 1)
//	//	maxAmountRobbed = house[0];
//	//else
//	//	maxAmountRobbed = max(rob(house, 0, size - 1), rob(house, 1, size));
//	//cout << "Max amount can be robbed is: " << maxAmountRobbed << endl;
//
//	cout << "Max amount can be robbed is: " << (size == 1 ? house[0] : max(rob(house, 0, size - 1), rob(house, 1, size))) << endl;
//	
//	return 0;
//}
