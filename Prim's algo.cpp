const int gf=1e6+1;

int dist[gf], parent[gf];
bool vis[gf];  // just a visited array
vector<pair<int, int> > adj[gf], tree[gf]; // adj[gf] is adjacency list and tree[gf] is resultant minimum spanning tree
int n;
int primsMST(int source) //Finds the cost and makes the MST
{
	for (int i = 1; i <= n; i++)
		dist[i] = 1e18;
	set<pair<int, int> > s;
	s.insert({0, source});
	int cost = 0;
	dist[source] = 0;
	while (!s.empty())
	{
		auto x = *(s.begin());
		s.erase(x);
		vis[x.second] = 1;
		cost += x.first;
		int u = x.second;
		int v = parent[x.second];
		int w = x.first;
		if (u > 0 && v > 0 && u != v)
		{
			tree[u].push_back({v, w});
			tree[v].push_back({u, w});
		}
		for (auto it : adj[x.second])
		{
			if (vis[it.first])  // obvious
				continue;
			if (dist[it.first] > it.second)  // upgrading values of adjacent nodes
			{
				s.erase({dist[it.first], it.first});  // update set
				dist[it.first] = it.second;  // update distance
				s.insert({dist[it.first], it.first}); // update set
				parent[it.first] = x.second;
			}
		}
	}
	return cost;
}
