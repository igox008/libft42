#include "libft.h"

char *ft_strnew(size_t size)
{
    size_t i = 0;
    char *str = (char *)malloc(size);
    if (str == NULL)
        return (NULL);
    while (i <= size)
    {
        str[i] = '\0';
        i++;
    }
    return (str);
}