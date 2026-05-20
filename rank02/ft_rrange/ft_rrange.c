#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int size = abs((end-start)+ 1);
	int *tab;
	int i = 0;

	if (size <=0)
		return(NULL);

	tab = malloc(sizeof(int) * size);
	if (!tab)
		return(NULL);
	
	if(start<end)
	{
		while(start<= end)
		{
			tab[i] = end;
			end--;
			i++;
		}
	}
	else
	{
		while(end<= start)
		{
			tab[i] = start;
			start--;
			i++;
		}
	}
	return(tab);
}