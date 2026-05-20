#include <unistd.h>
void ft_putchar(char  c)
{
	write(1,&c,1);
}
int main(int ac, char **av)
{
	int i = 0;
	
	int end;

	if (ac == 2)
	{
	
			
			while(av[1][i])
				i++;
			i--;

			while (i >=0 && (av[1][i] == ' ' || av[1][i] == '\t'))
				i--;
			end  = i;
			while (i>=0 && av[1][i]!= ' ' && av[1][i] != '\t')
				i--;
			i++;
			while (i<=end)
			{
				ft_putchar(av[1][i]);i++;}
		
	}
	write(1,"\n",1);
}