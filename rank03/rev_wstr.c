#include <unistd.h>

int	is_space(char c)
{
	return (c == ' ' || c == '\t');
}

int	main(int ac, char **av)
{
	int	i;
	int	start;
	int	end;
	int	first = 1;

	if (ac == 2)
	{
		i = 0;
		while (av[1][i])
			i++;
		i--;

		while (i >= 0)
		{
			while (i >= 0 && is_space(av[1][i]))
				i--;

			end = i;

			while (i >= 0 && !is_space(av[1][i]))
				i--;

			start = i + 1;

			if (start <= end)
			{
				if (!first)
					write(1, " ", 1);

				first = 0;

				while (start <= end)
				{
					write(1, &av[1][start], 1);
					start++;
				}
			}
		}
	}
	write(1, "\n", 1);
}