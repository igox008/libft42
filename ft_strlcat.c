#include "libft.h"
int ft_strlcat(char *dst, char *src, int size)
{
    int i = 0;
    int to_rtrn;
    int s_len;
    int d_len;

    s_len = ft_strlen(src);
    if (size == 0)
        return (s_len);
    d_len = ft_strlen(dst);
    if (d_len < size)
        to_rtrn = d_len + s_len;
    else
        to_rtrn = size + s_len;
    while (src[i] && d_len + i < size - 1)
    {
        dst[d_len + i] = src[i];
        i++;
    }
    dst[d_len + i] = '\0';
    return (to_rtrn);
}