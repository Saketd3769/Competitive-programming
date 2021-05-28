
// string double/single hashing
int hash1[gf];
int hash2[gf];
int p_pow1[gf];
int p_pow2[gf];
const int mod1 = mod;
const int mod2 = mod + 2;
const int p1 = 29;
const int p2 = 31;
void compute_hash(string t)
{  // remember that we are using 1 based indexing.
	string s = "*"; s += t;
	int pow1 = 1;
	int pow2 = 1;
	p_pow1[0] = 1;
	p_pow2[0] = 1;
	rep(i, 1, sz(s) - 1)
	{
		hash1[i] = (hash1[i - 1] + ((s[i] - 'a' + 1) * pow1) % mod1 ) % mod1;
		pow1 = (pow1 * p1) % mod1;
		hash2[i] = (hash2[i - 1] + ((s[i] - 'a' + 1) * pow2) % mod2 ) % mod2;
		pow2 = (pow2 * p2) % mod2;
	}
	rep(i, 1, 2e5 + 9)
	{
		p_pow1[i] = (p_pow1[i - 1] * p1) % mod1;
		p_pow2[i] = (p_pow2[i - 1] * p2) % mod2;
	}
}
// double hashing
int get_hash1(int l, int r)
{
	int var = (hash1[r] - hash1[l - 1] + mod1) % mod1;
	int mx = 2e5 + 8; // change it acc. to size of string
	int x = p_pow1[mx - l];
	var = (var * x) % mod1;
	return var;
}

int get_hash2(int l, int r)
{
	int var = (hash2[r] - hash2[l - 1] + mod2) % mod2;
	int mx = 2e5 + 8; 
	int x = p_pow2[mx - l];
	var = (var * x) % mod2;
	return var;
}
