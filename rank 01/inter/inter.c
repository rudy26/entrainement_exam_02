#include <unistd.h>

int seen(char *s,char c, int index)
{
	int i = 0;

	while(i <index)
	{
		if(s[i] == c)
			return(1);
		i++;
	}
	return(0);
}

int exist(char *s, char c)
{
	int  i = 0;
	while (s[i])
	{
		if(s[i] == c)
			return(1);
		i++;
	}
	return(0);
}

int main(int ac, char **av)
{
	int i = 0;

	if (ac == 3)
	{
		while (av[1][i])
		{
			if (!seen(av[1],av[1][i],i) && exist(av[2], av[1][i]))
				write(1,&av[1][i],1);
			i++;
		}
	}
	write(1,"\n",1);
}