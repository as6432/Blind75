//#include<iostream>
//#include<vector>
//#include<unordered_map>
//using namespace std;
//
//struct GraphNode
//{
//	int value;
//	vector<GraphNode*> Neighbours;
//
//	GraphNode() = default;
//	GraphNode(int val) : value(val) {}
//};
//
//// TC O(n) SC O(n)
//GraphNode* Clone(GraphNode* node, unordered_map<GraphNode*, GraphNode*> oldToNew)
//{
//	if (oldToNew.find(node) != oldToNew.end())
//		return oldToNew[node];
//
//	GraphNode* copy = new GraphNode(node->value);
//	oldToNew[node] = copy;
//	for (GraphNode* nei : node->Neighbours)
//	{
//		copy->Neighbours.push_back(Clone(nei, oldToNew));
//	}
//
//	return copy;
//}
//
//GraphNode* cloneGraph(GraphNode* headNode)
//{
//	if (headNode == nullptr)
//		return nullptr;
//
//	unordered_map<GraphNode*, GraphNode*> oldToNew{};
//	return Clone(headNode, oldToNew);
//}
//
//int main()
//{
//	GraphNode* headNode = new GraphNode(1);
//	GraphNode* Node2 = new GraphNode(2);
//	GraphNode* Node3 = new GraphNode(3);
//	GraphNode* Node4 = new GraphNode(4);
//
//	headNode->Neighbours.push_back(Node2);
//	headNode->Neighbours.push_back(Node3);
//
//	Node2->Neighbours.push_back(headNode);
//	Node2->Neighbours.push_back(Node4);
//
//	Node3->Neighbours.push_back(headNode);
//	Node3->Neighbours.push_back(Node4);
//
//	Node4->Neighbours.push_back(Node2);
//	Node4->Neighbours.push_back(Node3);
//
//	GraphNode* clonedGrpah = cloneGraph(headNode);
//
//	return 0;
//}