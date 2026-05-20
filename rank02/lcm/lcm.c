unsigned int    lcm(unsigned int a, unsigned int b)
{
	int max;

	if(a == 0 || b == 0)
		return(0);
	max = a;
	if(b>a)
		max = b;
	while (1)
	{
		if(max% a == 0 && max %b == 0 )
			return(max);
		max++;
	}
}