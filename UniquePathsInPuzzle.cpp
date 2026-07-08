//#include<iostream>
//#include<vector>
//using namespace std;
//
//// TC O(n*m) SC O(n)
//int main()
//{
//	int m = 3, n = 7;
//	vector<int> row(n, 1);
//
//	for (int i = 0; i < m - 1; i++)
//	{
//		vector<int> newRow(n, 1);
//		for (int j = n-2; j >= 0; j--)
//		{
//			newRow[j] = newRow[j + 1] + row[j];
//		}
//		row = newRow;
//	}
//
//	cout << "Number of unique paths are: " << row[0] << endl;
//	return 0;
//}
