//#include<iostream>
//using namespace std;
//
//int main()
//{
//	// TC O(n-2) ~ O(n) SP O(1)
//	// 0	1	2	3	4	5
//	// Dynamic prograaming way using caching or memonition
//	// When we start from last stair then at last and second last stair there will be always one way to climb stairs each time
//	// 					1	1    one = 1 two = 1
//	//
//	//              2   1        one = 2 two = 1
//	//			3   2			 one = 3 two = 2
//	//		5	3				 one = 5 two = 3
//	// 8	5					 one = 8 two = 5
//	// Return value of one as ways to climb stairs
//
//	int n = 5;
//	int one = 1, two = 1;		// Cache or memonition of values found
//	while(n > 1 )				
//	{
//		int temp = one;         
//		one = one + two;       
//		two = temp;
//		--n;
//	}
//
//	cout << "Number of ways to climb stairs are: " << one << endl;
//	return 0;
//}
