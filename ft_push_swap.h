#ifndef FT_PUSH_SWAP_H
#define FT_PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>

typedef strut node
{
    int number;
    strut node *next;
} node;

int ft_check_errors(int argc, char **argv);
int ft_check_integer(char *argv);
int ft_check_duplicate(char *argv, int i);



#endif

