#include <unistd.h>
#include <stdio.h>
void	ft_print_combn(int n)
{	
	int tab[n-1];
	int j;
	int k;
	int i=0;
	tab[0]='0';
	while (tab[0])
		while (i<n)
			i++;
		while (tab[n-i]<='9')	
		{
			tab[n-1                                                                                         C                               	]=tab[n-2]+1;
			while (tab[n-1]<='9')
			{	
		
				j=tab[n-2];
				k=tab[n-1];
				write(1,&j,1);
				write(1,&k,1);	
				write(1,", ",2);
	
				tab[n-1]++;		
			}
			tab[n-2]++;
		}
}
int	main(void)
{
	ft_print_combn(2);
}

