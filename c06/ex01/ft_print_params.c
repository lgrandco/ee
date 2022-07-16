#include <unistd.h>

void    ft_putstr(int argc, char **argv)
{
        int     i;
		int	j;

        i = 1;
        while (i < argc)
        {
                j = 0;
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
        }
}

int     main(int argc, char  **argv)
{
        if (argc > 1)
                ft_putstr(argc, argv);
        return (0);
}
