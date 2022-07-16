#include <unistd.h>

void	ft_putstr(char **argv)
{
	int	i;
	
	i = 0;
	while (argv[0][i])
	{
		write(1, &argv[0][i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char  **argv)
{
	if (argc)
		ft_putstr(argv);
	return (0);
}
