/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarai </var/mail/yarai>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 07:09:47 by yarai             #+#    #+#             */
/*   Updated: 2022/07/18 10:41:01 by yarai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dst, const	void	*src, size_t	n);

void	*ft_memcpy(void	*dst, const	void	*src, size_t	n)
{
	size_t	len;

	len = n;
	if (n == 0 || dst == src)
		return (dst);
	while (n--)
		*(unsigned char *)dst++ = *(unsigned char *)src++;
	return (dst - len);
}
