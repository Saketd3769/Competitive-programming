bool is_prime[1000001];
void sieve()
{
	int maxN=1000000;
	for(int i=1;i<=maxN;i++) is_prime[i]=true;
	is_prime[0]=is_prime[1]=false;
	
	for(int i=2;i*i<=maxN;i++)
	{
		if(is_prime[i])
		{
			for(int j=i*i;j<=maxN;j+=i)
			{
				is_prime[j]=false;
			}
		}
	}
}
