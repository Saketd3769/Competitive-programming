const int gf=1e6+1;

vector<int> parent(gf), size(gf);
int n;
vector<pair<int, pii>> edges;
int cost = 0;
vector<pair<int, pii>> result;
void make_set(int v)// just initializtion and all
{
	parent[v] = v;
	size[v] = 1;
	cost = 0;
	edges.clear();
	result.clear();
}

int find_set(int v) { // return parent
	if (v == parent[v])
		return v;
	return parent[v] = find_set(parent[v]);
}

void union_sets(int a, int b) {  // for merging
	a = find_set(a);
	b = find_set(b);
	if (a != b) {
		if (size[a] < size[b])
			swap(a, b);
		parent[b] = a;
		size[a] += size[b];
	}
}

void find_cost() // find cost as well as sotre tree in result vector
{
	sort(edges.begin(), edges.end());
	for (pair<int, pii> e : edges)
	{
		//cout << "xD" << endl;
		if (find_set(e.ss.ff) != find_set(e.ss.ss))
		{
			cost += e.ff;
			result.push_back(e);
			union_sets(e.ss.ff, e.ss.ss);
		}
	}
}
