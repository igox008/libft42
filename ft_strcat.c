#include "libft.h"

char *ft_strcat(char *dst, char *src)
{
    int i = 0;
    int j = 0;
    if (src[i] == '\0')
        return (dst);
    while (dst[i])
        i++;
    while (src[j])
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    dst[i] = '\0';
    return (dst);
}