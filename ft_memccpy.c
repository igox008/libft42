#include "libft.h"

void *memccpy(void *dst, const void *src, int c, size_t size)
{
    if (dst == NULL)
    {
        return (NULL);
    }
    size_t i = 0;
    char *d = (char *)dst;
    const char *s = (const char *)src;
    while (i < size && s[i] != c)
    {
        d[i] = s[i];
        i++;
    }
    if (i == size)
    {
        return (NULL);
    }
    return (dst + i + 1);
}