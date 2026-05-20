#include <unistd.h>
void ft_putnbr(int n)
{
	char c;
	if(n>9)
		ft_putnbr(n/10);
	c = n%10 + '0';
	write(1,&c,1);
}
int main(int ac,char **av)
{
	(void)av;

	if(ac> 1)
		ft_putnbr(ac -1);
	
	else
		write(1,"0",1);
	write(1,"\n",1);

}