#include "libft.h"

char    *ft_strncpy(char *dst, char *src, unsigned int n)
{
    unsigned int i = 0;
    while (src[i] && i < n)
    {
        dst[i] = src[i];
        i++;
    }
    while (i < n)
	{
		dst[i] = '\0';
	}
    return (dst);
}