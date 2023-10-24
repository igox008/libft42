#include "libft.h"

void ft_lstadd(t_list **alst, t_list *new)
{
    t_list *ptr = *alst;
    new->next = ptr;
    *alst = new;
}
/*
int main()
{
    t_list *head = (t_list *)malloc(sizeof(t_list));
    head->content = ft_strdup("hello");
    head->content_size = ft_strlen("hello") + 1;
    head->next = NULL;

    t_list *current = (t_list *)malloc(sizeof(t_list));
    current->content = ft_strdup(" ");
    current->content_size = ft_strlen(" ") + 1;
    current->next = NULL;
    head->next = current;

    current = (t_list *)malloc(sizeof(t_list));
    current->content = ft_strdup("world");
    current->content_size = ft_strlen("world") + 1;
    current->next = NULL;
    head->next->next = current;

    t_list *add = (t_list *)malloc(sizeof(t_list));
    add->content = ft_strdup("everyone, ");
    add->content_size = ft_strlen("everyone, ") + 1;
    add->next = NULL;

    t_list *ptr = head;
    while (ptr != NULL)
    {
        printf("%s", (char *)ptr->content);
        ptr = ptr->next;
    }
    ft_lstadd(&head, add);
    printf("\n");
    ptr = head;
    while (ptr != NULL)
    {
        printf("%s", (char *)ptr->content);
        ptr = ptr->next;
    }
    return (0);
}
*/