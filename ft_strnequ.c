#include "libft.h"
int ft_strnequ(char const *s1, char const *s2, size_t n)
{
    size_t i = 0;
    while (s1[i] && s2[i] && s1[i] == s2[i] && i < n)
        i++;
    if (i == n)
        return (1);
    return (0);
}