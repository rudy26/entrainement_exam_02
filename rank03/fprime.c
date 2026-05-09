#include <stdlib.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	int	n;
	int	i = 2;

	if (ac == 2)
	{
		n = atoi(av[1]);

		if (n == 1)
			printf("1");

		while (n >= i)
		{
			if (n % i == 0)
			{
				printf("%d", i);
				if (n != i)
					printf("*");
				n /= i;
			}
			else
				i++;
		}
	}
	printf("\n");
}