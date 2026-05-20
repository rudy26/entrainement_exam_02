#include <unistd.h>

int is_prime(int n)
{
	int i = 2;

	if (n < 2)
		return (0);
	while (i * i <= n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void ft_putnbr(int n)
{
	char c;

	if (n > 9)
		ft_putnbr(n / 10);

	c = (n % 10) + '0';
	write(1, &c, 1);
}

int ft_atoi(char *s)
{
	int i = 0;
	int n = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (-1);
		n = n * 10 + (s[i] - '0');
		i++;
	}
	return (n);
}

int main(int ac, char **av)
{
	int n;
	int sum = 0;
	int i = 2;

	if (ac != 2)
	{
		write(1, "0\n", 2);
		return (0);
	}

	n = ft_atoi(av[1]);
	if (n <= 0)
	{
		write(1, "0\n", 2);
		return (0);
	}

	while (i <= n)
	{
		if (is_prime(i))
			sum += i;
		i++;
	}

	ft_putnbr(sum);
	write(1, "\n", 1);
}