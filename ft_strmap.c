#include "libft.h"

char *ft_strmap(char const *s, char (*f)(char))
{
    int i = 0;
    if (s == NULL)
        return (NULL);
    int len = ft_strlen((char *)s);
    char *nw = (char *)malloc(len + 1);
    if (nw == NULL)
        return (NULL);
    while (i < len)
    {
        nw[i] = f(s[i]);
        i++;
    }
    nw[i] = '\0';
    return (nw);
}