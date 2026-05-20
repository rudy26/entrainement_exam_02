#include <unistd.h>

int main(int ac,char **av)
{
	int i = 0;
	char c;
	if (ac == 2)
	{
		while (av[1][i])
		{
			c = av[1][i];

			if(c>= 'A' && c<='Z')
			{
				write(1,"_",1);
				c+=32;
			}
			write(1,&c,1);
			i++;
		}
	}
	write(1,"\n",1);
}