#include "libft.h"

char *ft_strsub(char const *s, unsigned int start, size_t len)
{
    unsigned int i = 0;
    unsigned int t = start + len;
    char *sub = (char *)malloc(len + 1);
    while (start + i < t)
    {
        sub[i] = s[start + i];
        i++;
    }
    sub[i] = '\0';
    return (sub);
}