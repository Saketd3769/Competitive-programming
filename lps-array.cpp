//name lps indicates longest proper
//prefix which is also suffix.. A proper prefix is prefix with whole string not allowed
vector<int> lps(string s)
{
	int i = 1;
	int n = s.size();
	int j = 0;
	vector<int>lps(n, 0);
	while (i < n)
	{
		if (s[i] == s[j])
		{
			j++;
			lps[i] = j;
			i++;
		}
		else
		{
			if (j != 0)
			{
				j = lps[j - 1];
			}
			else
			{
				lps[i] = 0;
				i++;
			}
		}
	}
	return lps;
}
