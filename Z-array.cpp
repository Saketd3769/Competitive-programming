vector<int> z_array(string s)
{
	int n = s.size();
	int l = 0, r = 0;
	vector<int>z(n, 0);
	zip(i, 1, n)
	{
		if (i > r)
		{
			l = r = i;
			while (r < n && s[r] == s[r - l])
			{
				r++;
			}
			z[i] = r - l;
			r--;
		}
		else
		{
			int k = i - l;
			if (z[k] < r - i + 1)
			{
				z[i] = z[k];
			}
			else
			{
				l = i;
				while (r < n && s[r] == s[r - l])
					r++;
				z[i] = r - l;
				r--;
			}
		}
	}
	return z;
}
