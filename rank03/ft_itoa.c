#include <stdlib.h>

int	len_nb(int n)
{
	int	len = 0;

	if (n <= 0)
		len++;

	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	long	n;
	int		len;
	char	*str;

	n = nbr;
	len = len_nb(n);

	str = malloc(len + 1);
	if (!str)
		return (NULL);

	str[len] = '\0';

	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}

	if (n == 0)
		str[0] = '0';

	while (n)
	{
		str[--len] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}