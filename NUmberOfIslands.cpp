//#include<iostream>
//#include<vector>
//using namespace std;
//
// TC O(n*m) SC O(1)
//void dfs(vector<vector<int>>& grid, int i, int j)
//{
//	static int rows = grid.size(), cols = grid[0].size();
//
//	if (i < 0 || i >= rows || j < 0 || j >= cols || grid[i][j] == 0)
//		return;
//
//	grid[i][j] = 0;
//
//	dfs(grid, i + 1, j);
//	dfs(grid, i - 1, j);
//	dfs(grid, i, j + 1);
//	dfs(grid, i, j - 1);
//}
//
//int numberOfIslands(vector<vector<int>> &grid)
//{
//	int rows = grid.size(), cols = grid[0].size();
//	int islands = 0;
//
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			if (grid[i][j] == 1)
//			{
//				dfs(grid, i, j);
//				islands++;
//			}				
//		}
//	}
//
//	return islands;
//}
//
//int main()
//{
//	/*
//		vector<vector<int>> grid = {{1,1,1,0,0},
//									{1,1,0,0,0}, 
//									{1,1,0,0,0}, 
//									{0,0,0,1,1}};	// o/p : 2   */ 
//
//	vector<vector<int>> grid = { {1, 1, 0, 0, 0},
//								 {0, 1, 0, 0, 1},
//								 {1, 0, 0, 1, 1},
//								 {0, 0, 0, 0, 0},
//								 {1, 0, 1, 0, 1} };  // o/p : 6
//
//	cout << "Number of islands are: " << numberOfIslands(grid) << endl;
//	return 0;
//}
