/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchanet <gchanet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 12:44:58 by gchanet           #+#    #+#             */
/*   Updated: 2021/12/08 19:05:11 by gchanet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *elem))
{
	t_list	*tmp;

	tmp = lst;
	while (tmp)
	{
		if (tmp->content)
			(*f)(tmp->content);
		tmp = tmp->next;
	}
}
