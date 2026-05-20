int	    is_power_of_2(unsigned int n)
{

	if (n == 1)
		return(1);
	
	else if (n == 0)
		return(0);
	else if (n%2 == 0)
		return(1);
	
	return(0);

}