#include "libft.h"

char *ft_strchr(char *str, int c)
{
    int i = 0;
    int len = ft_strlen(str);
    while (i <= len)
    {
        if (str[i] == (char)c)
            return (str + i);
        i++;
    }
    return (NULL);
}