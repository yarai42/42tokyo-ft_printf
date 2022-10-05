/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarai </var/mail/yarai>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 07:43:48 by yarai             #+#    #+#             */
/*   Updated: 2022/07/27 11:02:21 by yarai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void	*dst, const	void	*src, size_t	len);

void	*ft_memmove(void	*dst, const	void	*src, size_t	len)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (len == 0 || dst == src)
		return (dst);
	if (dst <= src)
	{
		while (len--)
			*(unsigned char *)d++ = *(unsigned char *)s++;
	}
	else
	{
		while (len--)
			*(unsigned char *)(d + len) = *(unsigned char *)(s + len);
	}
	return (dst);
}
