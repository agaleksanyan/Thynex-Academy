#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **av)
{
    int i = 0;
    if (ac < 2)
        return 0;
    while(av[i])
        i++;
    i -= 1;
    while(i > 0)
    {
        int s = atoi(av[i]);
        printf("%d\n", s);
        i--;
    }
    return 0;
}