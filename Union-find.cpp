const int gf=1e6+1;

int sze[gf], parent[gf];
void make_set(int v) {
	parent[v] = v;
	sze[v] = 1;
}

int find_set(int v) {
	if (v == parent[v])
		return v;
	return parent[v] = find_set(parent[v]);
}


void union_set(int a, int b) {
	a = find_set(a);
	b = find_set(b);
	if (a != b) {
		if (sze[a] < sze[b])
			swap(a, b);
		parent[b] = a;
		sze[a] += sze[b];
	}
}
