//#include<iostream>
//using namespace std;
//
//// TC O(n) SC O(1)
//int main()
//{
//	int house[]{1,2,3,1};
//	int previousPreviousRobery = 0, previousRobbery = 0;
//
//	for (int robberyAmount : house)
//	{
//		int temp = max(robberyAmount + previousPreviousRobery, previousRobbery);
//		previousPreviousRobery = previousRobbery;
//		previousRobbery = temp;
//	}
//	                         
//	cout << "Max amount can be robbed is: " << previousRobbery << endl;
//	return 0;
//}
