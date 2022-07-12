#include <unistd.h>
#include <stdio.h>
void	ft_putchar(char c)
{
	write(1,&c,1);

}


void	ft_putnbr(int nb)
{
	int i;
	i=10;
	int start;
	int substrac;
	if (nb<0)
	{
		ft_putchar('-');
		nb*=-1;
	}
	start = nb;
	substrac=0;
	while (nb>9)
	{	
		nb = nb / 10;
		if (nb<=9)
		{
			ft_putchar(nb+'0');
			
			substrac+=nb*i;
			nb=start-substrac;
			i=10;
			if (nb<9)
				ft_putchar(nb+'0');

		}
		else
			i*=10;

		

	}
	ft_putchar('\n');

}

int	main(void)
{
	ft_putnbr(-342);
	return(0);
}

