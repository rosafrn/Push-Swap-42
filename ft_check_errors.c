#include <stdio.h>
#include <stdlib.h>

int ft_check_integer(char *argv);
int ft_check_duplicate(char **argv, int i);

int ft_check_errors(int argc, char **argv)
{
    int i;

    i = 1;
    while (i < argc)
    {
        if (ft_check_integer(argv[i]) == 0 || ft_check_duplicate(argv, i) == 0)
        {
            return (0);
        }
        i++;
    }
    return (1);
}


int ft_check_integer(char *argv)
{
    int i;

    i = 0;
    while (argv[i] != '\0')
    {   
        if ((argv[i] >= '0' && argv[i] <= '9') || (i == 0 && argv[i] == '-'))
        {
            i++;
        }
        else 
        {
            return (0);
        }
    }
    if (atol(argv) > 2147483647 || atol(argv) < -2147483648)
            return (0);
    return (1);
}

int ft_check_duplicate(char **argv, int i)
{
    int x;

    x = 1;
    while(x < i && (atoi(argv[i]) != atoi(argv[x])))
    {
        x++;
    }
    if (x != i)
    {
        return (0);
    }
    else
        return (1);
}