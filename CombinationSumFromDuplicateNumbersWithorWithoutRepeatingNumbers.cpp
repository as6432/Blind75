//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
////  TC O(k*(2^n)) where n is the size of array, and k is average length
////  SC O(x) where is x is number of possible combinations
//
//void combinationSum(vector<int> candidates, int target, vector<int> currCombination, int currSum, int currIndex, vector<vector<int>>& answer)
//{
//	if (currSum > target) 
//		return;   // Base case
//
//	if (currSum == target) 
//	{
//		answer.push_back(currCombination); //store the solution and backtrack
//		return;
//	}
//
//	for (int i = currIndex; i<candidates.size(); i++) // Iterate all candidates from start
//	{
//		if (i > currIndex && candidates[i] == candidates[i - 1])
//			continue; // skip duplicates candidates
//
//		currCombination.push_back(candidates[i]);     // Push the current candidate to current combination
//		currSum += candidates[i];					  // Add current candidate to current sum
//
//		combinationSum(candidates, target, currCombination, currSum, i+1/* if going allow repeated candidate then pass just i here*/, answer);  // Recursive call until hits base case
//		currCombination.pop_back();					  // when backtrack here, remove this and go on to the next candidate.
//		currSum -= candidates[i];
//	}
//}
//
//int main()
//{
//	vector<int> candidates{ 1,2 };
//	int target = 20;
//	vector<vector<int>> answer{ };
//	vector<int> currCombination{};
//	sort(candidates.begin(), candidates.end());
//	combinationSum(candidates, target, currCombination, 0, 0, answer);
//
//	cout << "Combination sum is: ";
//	for (auto i: answer)
//	{
//		cout << "[ ";
//		for (auto j : i)
//		{
//			cout << j << " ";
//		}
//		cout <<"]" << " ";
//	}
//
//	return 0;
//}
