// sieve for prime factorisation
int arr[1000001];
void sieve2()
{
	int mx=1000000;
	rep(i,1,mx)arr[i]=-1;
	rep(i,2,mx)
	{
		if(arr[i]==-1)
		{
			for(int j=i;j<=mx;j+=i)
			{
				if(arr[j]==-1)
				{
					arr[j]=i;
				}
			}
		}
	}
}

vector<int> getfac(int x)
{
	vector<int>get;
	while(x!=1)
	{
		get.pb(arr[x]);
		x/=arr[x];
	}
	return get;
}
