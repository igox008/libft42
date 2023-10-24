#include "libft.h"

char *ft_strncat(char *dst, char *src, unsigned int n)
{
    int i = 0;
    unsigned int j = 0;
    if (src[i] == '\0')
        return (dst);
    while (dst[i])
        i++;
    while (src[j] && j < n)
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    dst[i] = '\0';
    return (dst);
}