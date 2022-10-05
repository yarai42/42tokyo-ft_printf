/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarai </var/mail/yarai>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 23:11:24 by yarai             #+#    #+#             */
/*   Updated: 2022/07/13 00:50:54 by yarai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list	*lst, void	*(*f)(void *), void	(*del)(void *));

t_list	*ft_lstmap(t_list	*lst, void	*(*f)(void *), void	(*del)(void *))
{
	t_list		*new;
	t_list		*map;
	t_list		*tmp;

	if (!lst || !f)
		return (NULL);
	new = ft_lstnew(f(lst -> content));
	if (!new)
		return (NULL);
	map = NULL;
	ft_lstadd_back(&map, new);
	tmp = map;
	while (lst && lst -> next)
	{
		lst = lst -> next;
		new = ft_lstnew(f(lst -> content));
		if (!new)
		{
			ft_lstclear(&map, del);
			return (NULL);
		}
		ft_lstadd_back(&tmp, new);
		tmp = tmp -> next;
	}
	return (map);
}
