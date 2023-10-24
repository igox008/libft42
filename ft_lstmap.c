#include "libft.h"

t_list * ft_lstmap(t_list *lst, t_list * (*f)(t_list *elem))
{
    t_list *head = NULL;
    t_list *current = NULL;
    t_list *ptr = lst;
    while (ptr != NULL)
    {
        t_list *new_node = f(ptr);
        if (new_node = NULL)
        {
            while (head != NULL)
            {
                t_list *tmp = head;
                head = head->next;
                free(tmp);
            }
            return (NULL);
        }
        if (current == NULL)
        {
            head = new_node;
            current = new_node;
        }
        else
        {
            current->next = new_node;
            current = new_node;
        }
        ptr = ptr->next;
    }
    return (head);
}