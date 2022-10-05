/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarai </var/mail/yarai>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 22:15:51 by yarai             #+#    #+#             */
/*   Updated: 2022/10/02 13:21:37 by yarai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list	**lst, void (*del)(void *));

void	ft_lstclear(t_list	**lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst)
		return ;
	while (*lst)
	{
		if (del)
			del((*lst)-> content);
		tmp = (*lst)-> next;
		free(*lst);
		*lst = tmp;
	}
}
