/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarai </var/mail/yarai>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 19:15:40 by yarai             #+#    #+#             */
/*   Updated: 2022/05/31 21:56:38 by yarai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list	*lst);

int	ft_lstsize(t_list	*lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		lst = lst -> next;
		count++;
	}
	return (count);
}
