#include "libft.h"

void *ft_memalloc(size_t size)
{
    size_t i = 0;
    char *sp = (char *)malloc(size);
    if (sp == NULL)
        return (NULL);
    while (i <= size)
    {
        sp[i] = '\0';
        i++;
    }
    return (sp);
}