#include "libft.h"

char *ft_strchr(char *str, int c)
{
    char *ec;
    int i = 0;
    int n = 0;
    int len = ft_strlen(str);
    while (i <= len)
    {
        if (str[i] == (char)c)
        {
            ec = &str[i];
            n++;
        }
        i++;
    }
    if (c > 0)
        return (ec);
    return (NULL);
}