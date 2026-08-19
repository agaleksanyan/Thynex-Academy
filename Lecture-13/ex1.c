#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **av)
{
    int i;
    int max;
    int min;
    if (ac < 2)
        return 0;
    min = atoi(av[1]);
    max = min;
    i = 2;
    while(av[i])
    {
        if (atoi(av[i]) < min)
            min = atoi(av[i]);
        if (atoi(av[i]) > max)
            max = atoi(av[i]);
        i++;
    }
    printf("%d\n", max + min);
    return 0;
}