#include<iostream>
#include<vector>
#include<cassert>

using namespace std;


//Sparse Graph-- Adjacency table
class SparseGraph {

private:
	int n, m;
	bool directed;
	vector<vector<int>> g;
};