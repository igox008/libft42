#include "libft.h"

void ft_bzero(void *str, size_t n)
{
    size_t i = 0;
    char *s = (char *)str;
    while (i < n)
    {
        s[i] = '\0';
        i++;
    }
}