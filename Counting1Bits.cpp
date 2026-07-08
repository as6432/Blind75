//#include<iostream>
//using namespace std;
//
//int main()
//{
//	// TC O(nlogn) SP O(1)   - n*logn because need to check all number still given number and logn time need to get count of 1bit in each number
//	const int number = 3;
//	int answer[number + 1]{ 0 };
//	int currentNumber = 1;
//
//	while (currentNumber <= number)
//	{
//		int countofOne = 0;
//		int dummyNumber = currentNumber;
//
//		while (dummyNumber != 0)
//		{
//			countofOne += dummyNumber % 2;
//			dummyNumber = dummyNumber / 2;
//		}
//
//		answer[currentNumber] = countofOne;
//		++currentNumber;
//	}
//
//	cout << "Count of 1 bit still each number is: ";
//	for (int i : answer)
//	{
//		cout << i << " ";
//	}
//	cout << endl;
//
//	/*
//
//	0	0000 0000
//	1	0000 0001---> 1 is offset
//	2	0000 0010---> 2 is offset ( offset = 1 * 2 == 2 ? 2 : 1)
//	3	0000 0011---> 2 is offset ( offset = 2 * 2 == 3 ? 4 : 2)
//	4	0000 0100---> 4 is offset ( offset = 2 * 2 == 4 ? 4 : 2)
//	5	0000 0101---> 4 is offset ( offset = 4 * 2 == 5 ? 8 : 4)
//	6 	0000 0110---> 4 is offset ( offset = 4 * 2 == 6 ? 8 : 4)
//	7	0000 0111---> 4 is offset ( offset = 4 * 2 == 7 ? 8 : 4)
//	8	0000 1000---> 8 is offset ( offset = 4 * 2 == 8 ? 8 : 4)
//	9	0000 1001---> 8 is offset ( offset = 4 * 2 == 9 ? 8 : 4)
//	10	0000 1010---> 8 is offset ( offset = 4 * 2 == 10 ? 8 : 4)
//	11	0000 1011---> 8 is offset ( offset = 4 * 2 == 11 ? 8 : 4)
//	12	0000 1111---> 8 is offset ( offset = 4 * 2 == 12 ? 8 : 4)
//
//	Offset range could be 1, 2,,4,8,16,32,64 etc
//
//	*/
//
//	// TC O(n) SP O(1)   - n because need to check all number still given number
//	const int number2 = 3;
//	int answer2[number2 + 1]{ 0 };		// Output array which stores count of 1 bit of each number
//	int offset = 1;						// Offset is used to get the previous number bits to current number bit calculation
//	int currentNumber2 = 1;             // To output from starting number else need to reverse the output array
//
//	while (currentNumber2 <= number)                // To check all number including given number
//	{
//		if (offset * 2 == currentNumber2)		   // Update the offset in range 1, 2, 4, 8, 16, 32 etc
//			offset = currentNumber2;
//
//		answer2[currentNumber2] = 1 + answer2[currentNumber2 - offset];        // for current number leading 1 bit will be there and get previous 1 bit count                                          
//																			   // which is already found in output array
//		currentNumber2++;
//	}
//
//	cout << "Count of 1 bit still each number is: ";
//	for (int i : answer2)
//	{
//		cout << i << " ";
//	}
//	cout << endl;
//
//
//	return 0;
//}
