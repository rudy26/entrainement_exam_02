#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **av)
{
	int a ;
	int b;
	int tmp;

	if (ac == 3)
	{
		a = atoi(av[1]);
		b= atoi(av[2]);
		if(a <= 0 || b<=0)
			return(0);
		while(b!= 0)
		{
			tmp = b;
			b = a%b;
			a = tmp;
		}
		printf("%d\n", a);
	}
	else
		printf("\n");
	
}