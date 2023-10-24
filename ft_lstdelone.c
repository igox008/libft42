#include "libft.h"

void ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
    t_list *ptr = *alst;
    del(ptr->content, ptr->content_size);
    free(ptr);
    *alst = NULL;
}
/*
void custom_del(void *content, size_t content_size) {
    free(content);
    (void)content_size;
}
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

    t_list *ptr = head;
    while (ptr != NULL)
    {
        printf(":%s:", (char *)ptr->content);
        ptr = ptr->next;
    }
    ft_lstdelone(&head->next->next, custom_del);
    printf("\n");
    ptr = head;
    while (ptr != NULL)
    {
        printf(":%s:", (char *)ptr->content);
        ptr = ptr->next;
    }
    return (0);
}
*/