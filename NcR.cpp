const int gf=1e6+1;

int fact[gf], inv[gf];
void pre()
{
	fact[0] = 1;
	inv[0] = 1;
	for (int i = 1; i < gf; i++)
		fact[i] = (i * fact[i - 1]) % mod;
}
int nCr(int n, int r)
{
	if (n == r)
		return 1;
	if (r == 0)
		return 1;
	return (((fact[n] * BE(fact[n - r], mod - 2, mod)) % mod ) * BE(fact[r], mod - 2, mod)) % mod;
}
