#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
    t_list *ptr = lst;
    while (ptr != NULL)
    {
        f(ptr);
        ptr = ptr->next;
    }
}