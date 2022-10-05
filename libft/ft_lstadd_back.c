/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarai </var/mail/yarai>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 20:28:57 by yarai             #+#    #+#             */
/*   Updated: 2022/07/04 23:34:27 by yarai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list	**lst, t_list	*new);

void	ft_lstadd_back(t_list	**lst, t_list	*new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	else if (*lst)
	{
		last = ft_lstlast(*lst);
		last -> next = new;
		return ;
	}
	*lst = new;
}
