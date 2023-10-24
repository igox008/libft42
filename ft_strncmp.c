#include "libft.h"

int ft_strncmp(char *s1, char *s2, int n)
{
    int i = 0;
    while (s1[i] == s2[i] && s1[i] && s2[i] && i < n)
        i++;
    if (i == n)
        return (0);
    return (s1[i] - s2[i]);
}