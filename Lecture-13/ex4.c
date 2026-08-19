#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
    int i = 1;
    if (ac != 3)
    {
        printf("%d\n", -1);
        return 0;
    }
    int target = atoi(av[ac - 1]);
    printf("%d", target);
    while(i < ac - 1)
    {
        if (atoi(av[i]) == target)
            printf("%d", i);
            return 0;
    }
    printf("%d", -1);
    return 0;
}