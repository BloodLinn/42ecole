
#include <unistd.h>

void	ft_puthcar(char b)
{
	write(1,&b,1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	start;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
			i++;
		i--;
		while (i > 0 && argv[1][i] == ' ')
			i--;
		while (argv[1][i] != ' ')
			i--;
		i++;
		while (argv[1][i])
		{
			ft_puthcar(argv[1][i]);
			i++;
		}
	}
	ft_puthcar('\n');
}
