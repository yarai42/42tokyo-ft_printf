/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarai </var/mail/yarai>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 07:18:46 by yarai             #+#    #+#             */
/*   Updated: 2022/08/23 19:54:50 by yarai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const	char	*s1, const	char	*s2, size_t	n);

int	ft_strncmp(const	char	*s1, const	char	*s2, size_t	n)
{
	size_t			i;
	unsigned char	*u1;
	unsigned char	*u2;

	i = 0;
	u1 = (unsigned char *)s1;
	u2 = (unsigned char *)s2;
	while (n--)
	{
		if (u1[i] != u2[i])
			return (u1[i] - u2[i]);
		else if (!(u1[i]) && !(u2[i]))
			return (0);
		i++;
	}
	return (0);
}
