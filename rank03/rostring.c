#include <unistd.h>

void	ft_putchar(char c) { write(1, &c, 1); }
int		is_space(char c) { return (c == ' ' || c == '\t'); }

int	main(int argc, char **argv)
{
	char	*s;
	int		i, fw_start, fw_end, printed;

	if (argc < 2) { ft_putchar('\n'); return (0); }
	s = argv[1];
	i = 0;
	while (s[i] && is_space(s[i])) i++;
	fw_start = i;
	while (s[i] && !is_space(s[i])) i++;
	fw_end = i;
	printed = 0;
	while (s[i])
	{
		while (s[i] && is_space(s[i])) i++;
		if (!s[i]) break;
		if (printed) ft_putchar(' ');
		while (s[i] && !is_space(s[i])) { ft_putchar(s[i]); i++; }
		printed = 1;
	}
	if (fw_end > fw_start)
	{
		if (printed) ft_putchar(' ');
		while (fw_start < fw_end) ft_putchar(s[fw_start++]);
	}
	ft_putchar('\n');
	return (0);
}
