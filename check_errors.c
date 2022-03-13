#include "push_swap.h"

int check_integer(char *argv);
int check_duplicate(char **argv, int i);

int check_errors(int argc, char **argv)
{
    int i;

    i = 1;
    while (i < argc)
    {
        if (check_integer(argv[i]) == 0 || check_duplicate(argv, i) == 0)
        {
            return (0);
        }
        i++;
    }
    return (1);
}


int check_integer(char *argv)
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

int check_duplicate(char **argv, int i)
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