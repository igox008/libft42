#include "libft.h"

void ft_strclr(char *s)
{
    int i = 0;
    while (s[i])
    {
        s[i] = '\0';
        i++;
    }
}