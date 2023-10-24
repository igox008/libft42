#include "libft.h"

int ft_memcmp(const void *str1, const void *str2, size_t n)
{
    size_t i = 0;
    const unsigned char *s1 = (const unsigned char *)str1;
    const unsigned char *s2 = (const unsigned char *)str2;
    while (i < n)
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return (0);
}