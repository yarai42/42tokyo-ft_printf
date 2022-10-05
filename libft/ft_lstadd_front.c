/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarai </var/mail/yarai>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 13:56:38 by yarai             #+#    #+#             */
/*   Updated: 2022/07/22 10:54:12 by yarai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list	**lst, t_list	*new);

void	ft_lstadd_front(t_list	**lst, t_list	*new)
{
	t_list	*new_last;

	if (!lst || !new)
		return ;
	new_last = ft_lstlast(new);
	new_last -> next = *lst;
	*lst = new;
}
