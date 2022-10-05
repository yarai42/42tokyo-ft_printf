/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarai </var/mail/yarai>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 19:19:36 by yarai             #+#    #+#             */
/*   Updated: 2022/07/04 22:54:58 by yarai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list	*lst);

t_list	*ft_lstlast(t_list	*lst)
{
	if (!lst)
		return (NULL);
	while (lst && lst -> next)
		lst = lst -> next;
	return (lst);
}
