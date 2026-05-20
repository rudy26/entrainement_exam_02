int get_value(char c )
{
	if(c>= '0' && c<= '9')
		return(c-'0');
	else if(c>= 'a' && c<= 'f')
		return(c-'a' +10);
	else if(c>= 'A' && c<= 'F')
		return(c-'A' +10);
	return(-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int i = 0;
	int res =0;
	int sign = 1;
	int val;

	if(str[i] == '-' )
		{sign = -1;i++;}
	while(str[i])
	{
		val = get_value(str[i]);

		if( val < 0 || val > str_base)
			break;
		
		res = res * str_base +val;
		i++;
	}
	return(res * sign);
}