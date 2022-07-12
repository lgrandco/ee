#include <stdio.h>
void	putnb(int nb)
{
	printf("%d, %d, %d,\n",nb,nb/10,nb%10);
}

int	main(void)
{
	putnb(25);

	putnb(342);
	putnb(3425);
}
