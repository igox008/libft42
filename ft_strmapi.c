#include "libft.h"
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int i = 0;
    if (s == NULL)
        return (NULL);
    unsigned int len = ft_strlen((char *)s);
    char *nw = (char *)malloc(len + 1);
    if (nw == NULL)
        return (NULL);
    while (i < len)
    {
        nw[i] = f(i, s[i]);
        i++;
    }
    nw[i] = '\0';
    return (nw);
}