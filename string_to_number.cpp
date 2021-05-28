int s_to_n(string s)
{
	int res = 0;
	int var = 1;
	rzip(i, sz(s) - 1, 0)
	{
		res += (s[i] - '0') * var;
		var *= 10;
	}
	return res;
}
