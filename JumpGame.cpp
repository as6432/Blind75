//#include<iostream>
//using namespace std;
//
//// TC O(n) SC O(1)
//int main()
//{
//	int numbers[]{ 2, 1, 1, 1, 0 };
//	int size = sizeof(numbers) / sizeof(numbers[0]);
//	int goal = size - 1;
//
//	for (int i = size - 1 ; i >= 0; i--)
//	{
//		if (i + numbers[i] >= goal)
//			goal = i;
//	}
//
//	if (goal == 0)
//		cout << "We can reach to the end index..." << endl;
//	else
//		cout << "We can't reach to the end index..." << endl;
//
//	return 0;
//}