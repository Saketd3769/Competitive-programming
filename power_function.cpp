int power(int x, int n) //function to calculate x raise to power n 
{
	int result = 1;
	while (n > 0)
	{
		if (n % 2 == 1)
			result = result * x;
		x = x * x;
		n = n / 2;
	}
	return result;
}
