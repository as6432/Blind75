//#include<iostream>
//#include<vector>
//using namespace std;
//
//// TC O(m*n) SC O(m*n)
//void dfs(vector<vector<int>>& height, vector<vector<bool>>& visit, int r, int c)
//{
//	int Rows = height.size(), Cols = height[0].size();
//
//	visit[r][c] = true;
//
//	//up
//	if (r - 1 >= 0 && visit[r - 1][c] != true && height[r - 1][c] >= height[r][c])
//		dfs(height, visit, r - 1, c);
//
//	//down
//	if (r + 1 < Rows && visit[r + 1][c] != true && height[r + 1][c] >= height[r][c])
//		dfs(height, visit, r + 1, c);
//
//	//left
//	if (c - 1 >= 0 && visit[r][c - 1] != true && height[r][c - 1] >= height[r][c])
//		dfs(height, visit, r, c - 1);
//
//	//right
//	if (c + 1 < Cols && visit[r][c + 1] != true && height[r][c + 1] >= height[r][c])
//		dfs(height, visit, r, c + 1);
//}
//
//vector<vector<int>> getCellsWhichCanReachToPacificAndAtlanticOcean(vector<vector<int>> height)
//{
//	int Rows = height.size(), Cols = height[0].size();
//	vector<vector<bool>> pac(Rows, vector<bool>(Cols));
//	vector<vector<bool>> alt(Rows, vector<bool>(Cols));
//	
//	for (int c = 0; c < Cols; c++)
//	{
//		dfs(height, pac, 0, c);
//		dfs(height, alt, Rows - 1, c);
//	}
//
//	for (int r = 0; r < Rows; r++)
//	{
//		dfs(height, pac, r, 0);
//		dfs(height, alt, r, Cols-1);
//	}
//
//	vector<vector<int>> result{ };
//	for (int r = 0; r < Rows; r++)
//	{
//		for (int c = 0; c < Cols; c++)
//		{
//			if (pac[r][c] && alt[r][c])
//				result.push_back({r, c});
//		}
//	}
//
//	return result;
//}
//
//int main()
//{
//	//vector<vector<int>> height = { {1,2,2,3,5}, {3,2,3,4,4}, {2,4,5,3,1}, {6,7,1,4,5}, {5,1,1,2,4} };  // o/p [[0,4],[1,3],[1,4],[2,2],[3,0],[3,1],[4,0]]
//	//vector<vector<int>> height = { {1} };  // o/p [[0,0]]
//	vector<vector<int>> height = { {2, 2, 2, 2}, {2, 2, 2, 2}};  // o/p [ [0,0] [0,1] [0,2] [0,3] [1,0] [1,1] [1,2] [1,3] ]
//	vector<vector<int>> result = getCellsWhichCanReachToPacificAndAtlanticOcean(height);
//
//	cout << "[ ";
//	for (vector<int> i : result)
//	{
//		cout <<"[" << i[0] << "," << i[1] << "] ";
//	}
//	cout << "]";
//
//	return 0;
//}