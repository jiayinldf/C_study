
int power(int n)
{
	extern A;
	int y=1;
	int i;
	for ( i = 0; i < n; i++)
	{
		y *= A;
	}
	return y;
	

}