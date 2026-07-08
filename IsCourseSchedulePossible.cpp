//#include<iostream>
//#include<vector>
//#include<unordered_map>
//using namespace std;
//
//// TC O(n+p) SC O(n+p)
//bool dfs(int course, unordered_map<int, vector<int>>& mapPrerequites, unordered_map<int, int> visitedCourses)
//{
//	if (visitedCourses.find(course) != visitedCourses.end())
//		return false;
//
//	if (mapPrerequites[course].size() == 0)
//		return true;
//
//	visitedCourses.insert(pair<int, int>(course, 0));
//	vector<int> pre = mapPrerequites.at(course);
//	for (int i : pre)
//	{
//		if (dfs(i, mapPrerequites, visitedCourses) == false)
//			return false;
//	}
//
//	visitedCourses.erase(course);
//	mapPrerequites[course] = {};
//
//	return true;
//}
//
//bool IsCourseSchedulePossible(int numberOfCourses, vector<vector<int>> prerequitesOfCourses)
//{
//	int course = numberOfCourses - 1;
//	unordered_map<int, vector<int>> mapPrerequites;
//	for (vector<int> i : prerequitesOfCourses)
//	{
//		if (mapPrerequites.find(i[0]) == mapPrerequites.end())
//			mapPrerequites.insert(pair<int, vector<int>>(i[0], { i[1] }));
//		else
//			mapPrerequites[i[0]].push_back(i[1]);
//	}
//
//	unordered_map<int, int> visitedCourses{};
//	for (int i = 0; i < numberOfCourses; i++)
//	{
//		if (dfs(i, mapPrerequites, visitedCourses) == false)
//			return false;
//	}
//
//	return true;
//}
//
//int main()
//{
//	int numberOfCourses = 2;
//	vector<vector<int>> prerequitesOfCourses{ {0, 1}, {3, 4} };
//
//	bool status = IsCourseSchedulePossible(numberOfCourses, prerequitesOfCourses);
//	if (status)
//		cout << "Course can be scheduled" << endl;
//	else
//		cout << "Course can not be scheduled" << endl;
//
//	return 0;
//}