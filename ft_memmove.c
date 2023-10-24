#include "libft.h"

void    *ft_memmove(void *dst, void *src,  size_t size)
{
    size_t i = 0;
    char *d = (char *)dst;
    const char *s = (const char *)src;
    if (d > s && d < s + size)
    {
        char *tmp = (char *)malloc(size);
        if (tmp == NULL)
            return (NULL);
        while (i < size)
        {
            tmp[i] = s[i];
            i++;
        }
        i = 0;
        while (i < size)
        {
            d[i] = tmp[i];
            i++;
        }
        free(tmp);
    }
    else
    {
        while (i < size)
        {
            d[i] = s[i];
            i++;
        }
    }
    return (dst);
}