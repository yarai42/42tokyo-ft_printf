/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarai </var/mail/yarai>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 21:41:02 by yarai             #+#    #+#             */
/*   Updated: 2022/10/02 13:12:28 by yarai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void	*b, int c, size_t	len);

void	*ft_memset(void	*b, int c, size_t	len)
{
	unsigned char	*ans;

	ans = (unsigned char *)b;
	while (len--)
		*ans++ = c;
	return (b);
}
