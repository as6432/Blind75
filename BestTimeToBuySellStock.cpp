//#include<iostream>
//using namespace std;
//
// // Time O(n) Space O(1)
//int main()
//{
//	int iStockTrans[]{ 7,6,4,3,1 };
//	int buy = 0, sell = 1;
//	int iMaxprofit = 0;
//
//	for (int i = 0; i < ((sizeof(iStockTrans) / sizeof(int)) - 1); i++)
//	{
//		if (iStockTrans[sell] > iStockTrans[buy])
//			iMaxprofit = max(iMaxprofit, (iStockTrans[sell] - iStockTrans[buy]));
//		else
//			buy = sell;
//
//		++sell;
//	}
//
//	cout << "Total Profit:" << iMaxprofit;
//	return 0;
//}