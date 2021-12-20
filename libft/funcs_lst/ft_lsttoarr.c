/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsttoarr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchanet <gchanet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 12:44:58 by gchanet           #+#    #+#             */
/*   Updated: 2021/12/15 14:09:20 by gchanet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	**ft_lsttoarr(t_list *lst, char *(*map)(void *))
{
	int		i;
	char	**arr;
	int		size;

	i = 0;
	size = ft_lstsize(lst) + 1;
	arr = ft_memalloc(size * sizeof(char *));
	while (i < size - 1)
	{
		arr[i++] = map(lst);
		lst = lst->next;
	}
	return (arr);
}
