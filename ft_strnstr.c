#include "libft.h"
char *ft_strnstr(char *str, char *to_find, int len)
{
    int i = 0;
    int j;
    if (to_find[i] == '\0')
        return (str);
    while (str[i])
    {
        j = 0;
        while (str[i + j] == to_find[j] && to_find[j] != '\0' && j < len)
            j++;
        if (to_find[j] == '\0')
            return (str + i);
        i++;
    }
    return (NULL);
}