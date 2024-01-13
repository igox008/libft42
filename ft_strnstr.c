/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaassir <alaassir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 08:29:15 by alaassir          #+#    #+#             */
/*   Updated: 2023/11/04 16:56:32 by alaassir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *fnd, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (ft_strlen(fnd) == 0)
		return ((char *)str);
	else if (!str && !len) 
		return (NULL);
	while (str[i] && i < len)
	{
		j = 0;
		while (str[i + j] == fnd[j] && fnd[j] && i + j < len)
			j++;
		if (fnd[j] == '\0')
			return ((char *)(str + i));
		i++;
	}
	return (NULL);
}
