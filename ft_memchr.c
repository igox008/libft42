#include "libft.h"

void *ft_memchr(void *str, int c, size_t n)
{
    size_t i = 0;
    unsigned char *s = (unsigned char *)str;
    unsigned char uc = (unsigned char)c;
    while (i < n)
    {
        if (s[i] == uc)
            return (s + i);
        i++;
    }
    return (NULL);
}