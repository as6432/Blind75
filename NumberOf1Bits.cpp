//#include<iostream>
//using namespace std;
//
//int main()
//{
//	// TC O(32) ~ O(1) SP O(1)   32 becacuse need to iterate 32 bit number
//	unsigned int number = 11;
//	int countOfOne = 0;
//	while (number != 0)
//	{
//		countOfOne += number % 2;
//		number = number >> 1;
//	}
//	cout << "Number of 1 bit in number: " << countOfOne << endl;
//
//	// TC O(3) ~ O(1) SP O(1)    3 because will run for number of 1 present in bit representation of number
//	unsigned int number2 = 11;
//	int countOfOne2 = 0;
//	while (number2 != 0)
//	{
//		number2 &= (number2 - 1);
//		countOfOne2++;
//	}
//	cout << "Number of 1 bit in number: " << countOfOne2 << endl;
//
//	return 0;
//}
