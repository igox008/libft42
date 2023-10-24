#include "libft.h"

char *ft_strtrim(char const *s)
{
    int i = 0;
    int j = 0;
    int f = ft_strlen((char *)s);
    int t;
    while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
        i++;
    while (s[f - 1] == ' ' || s[f - 1] == '\n' || s[f - 1] == '\t')
        f--;
    t = f - i;
    char *str = (char *)malloc(t + 1);
    if (str == NULL)
        return (NULL);
    while (i + j < t)
    {
        str[j] = s[i + j];
        j++;
    }
    str[j] = '\0';
    return (str);
}