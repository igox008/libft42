#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    int i = 0;
    int j = 0;
    int t = ft_strlen((char *)s1) + ft_strlen((char *)s2);
    char *rsl = (char *)malloc(t + 1);
    if (rsl == NULL)
        return (NULL);
    while (j < t)
    {
        while (s1[i])
        {
            rsl[j] = s1[i];
            i++;
            j++;
        }
        i = 0;
        while (s2[i])
        {
            rsl[j] = s1[i];
            i++;
            j++;
        }
    }
    rsl[j] = '\0';
    return (rsl);
}