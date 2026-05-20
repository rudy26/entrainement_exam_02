#include <unistd.h>

void print_hex(int n )
{
	char *base = "0123456789abcdef";

	if(n >= 16)
		print_hex(n/16);
	n = n%16;
	write(1,&base[n], 1);
}

int main(int ac , char **av )
{
	int n = 0;
	int i = 0;

	if(ac == 2)
	{
		while(av[1][i])
		{
			n = n *10 +(av[1][i] - '0');
			i++;
		}
		print_hex(n);
	}
	write(1,"\n",1);
}