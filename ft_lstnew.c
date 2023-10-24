#include "libft.h"

t_list * ft_lstnew(void const *content, size_t content_size)
{
    t_list *new = (t_list *)malloc(sizeof(t_list));
    if (new == NULL)
    {
        new->next = NULL;
        return (NULL);
    }
    if (content == NULL)
    {
        new->content = NULL;
        new->content_size = 0;
    }
    else
    {
        new->content = (void *)malloc(content_size);
        if (new->content == NULL)
        {
            free(new);
            return (NULL);
        }
        ft_memcpy(new->content, (void *)content, content_size);
        new->content_size = content_size;
    }
    return (new);
}