#include<vector>
#include<cassert>




using namespace std;

//����ͼ    --�ڽӾ���
//dense graph -- Adjacency matrjix
class DenseGraph {

private:
	int n, m;
	bool directed;
	vector < vector<bool>> g;

public:
	DenseGraph(int n, bool directed) {

		this->n = n;
		this->m = 0;
		this->directed = directed;
		for (int i = 0; i < n; i++)
			g.push_back(vector<bool>(n, false));
	}

	~DenseGraph()
	{

	}

	int V() { return n; }
	int E() { return m; }

	void addEdge(int v, int w) {


	}
};