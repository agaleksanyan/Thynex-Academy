#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	i;
	int	size;

	if (ac < 3 || (ac - 1) % 2 != 0)
		return (1);
	size = (ac - 1) / 2;
	i = 1;
	while (i <= size)
	{
		if (atoi(av[i]) != atoi(av[i + size]))
		{
			printf("Not equal\n");
			return (0);
		}
		i++;
	}
	printf("Equal\n");
	return (0);
}