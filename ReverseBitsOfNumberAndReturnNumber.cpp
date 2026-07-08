//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int number = 43261596;
//	int reverse = 0;
//
//	// if Number is 3
//	// 00000000 00000000 00000000 00000011 -> 32 bits of number = 3
//	// 00000000 00000000 00000000 00000000 -> Initial 32 bits of reverse number = 0
//	// 
//	// Need right side bit of number and update it with the bit at index in reverse number bits from left
//	// 00000000 00000000 00000000 00000011
//	// number >> i (0)   -> No right shift will happen because of 0
//	// number >> i (0) & 1  -> Got the right side last bit which is 1
//	// 
//	// 00000000 00000000 00000000 00000000
//	// bit << (31 - i (0)) => 10000000 00000000 00000000 00000000
//	// result = result | bit
//	// 00000000 00000000 00000000 00000000 | 10000000 00000000 00000000 00000000
//	// 10000000 00000000 00000000 00000000
//	// 
//	// 00000000 00000000 00000000 00000011
//	// number >> i (1)   -> right shift will happen by 1
//	// 00000000 00000000 00000000 00000001
//	// number >> i (1) & 1  -> Got the right side last bit which is 1
//	// 
//	// 10000000 00000000 00000000 00000000
//	// bit << (31 - i (1)) => 01000000 00000000 00000000 00000000
//	// result = result | bit
//	// 10000000 00000000 00000000 00000000 | 01000000 00000000 00000000 00000000
//	// 11000000 00000000 00000000 00000000
//	// 
//	// 00000000 00000000 00000000 00000001
//	// number >> i (2)   -> right shift will happen by 2
//	// 00000000 00000000 00000000 00000000
//	// number >> i (2) & 1  -> Got the right side last bit which is 0
//	// 
//	// 11000000 00000000 00000000 00000000
//	// bit << (31 - i (2)) => 00000000 00000000 00000000 00000000
//	// result = result | bit
//	// 11000000 00000000 00000000 00000000 | 00000000 00000000 00000000 00000000
//	// 11000000 00000000 00000000 00000000
//
//	// Priority of >> << is greater than the & |
//	
//	// TC O(32) ~ O(1) SP O(1)
//	for (int i = 0; i < 32; i++)
//	{
//		// Right shift the number by position and Get bit from the number from right
//		int bit = number >> i & 1;     
//		if(bit)
//			reverse = reverse | (bit << (31 - i)); // Update the reverse number bit with above bit by shifting bit to left by position
//	}
//
//	cout << "Number after reversing bit of number " << number<<" is: " << reverse << endl;
//
//	return 0;
//}
