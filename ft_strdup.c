#include "libft.h"

char *ft_strdup(const char *str)
{
    int i = 0;
    int s = ft_strlen((char *)str);
    char *dup = (char *)malloc(s + 1);
    if (dup == NULL)
    {
        return (NULL);
    }
    while (str[i])
    {
        dup[i] = str[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}