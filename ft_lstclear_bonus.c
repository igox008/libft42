/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaassir <alaassir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:16:19 by alaassir          #+#    #+#             */
/*   Updated: 2023/11/03 23:10:21 by alaassir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;
	t_list	*tmp;

	if (lst && del)
	{
		tmp = *lst;
		while (tmp != NULL)
		{
			ptr = tmp->next;
			del(tmp->content);
			free(tmp);
			tmp = ptr;
		}
		*lst = NULL;
	}
}
