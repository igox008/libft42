#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
    if (s == NULL)
        return (NULL);

    size_t i = 0;
    unsigned char uc = (unsigned char) c;
    char *p = s;
    while (i < n)
    {
        p[i] = uc;
        i++;
    }
    return (s);
}