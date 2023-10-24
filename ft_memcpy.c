#include "libft.h"

void    *ft_memcpy(void *dst, void *src,  size_t size)
{
    size_t i = 0;
    char *d = (char *)dst;
    const char *s = (const char *)src;
    while (i < size)
    {
        d[i] = s[i];
        i++;
    }
    return (dst); // just for consistency and to indicate the end of the function
}