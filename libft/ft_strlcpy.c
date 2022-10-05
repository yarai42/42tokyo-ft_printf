/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarai </var/mail/yarai>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 12:28:21 by yarai             #+#    #+#             */
/*   Updated: 2022/06/05 04:30:44 by yarai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char	*dst, const	char	*src, size_t	dstsize);

size_t	ft_strlcpy(char	*dst, const	char	*src, size_t	dstsize)
{
	size_t	src_len;
	size_t	ans;

	src_len = 0;
	while (src[src_len])
		src_len++;
	ans = src_len;
	if (src_len < dstsize)
	{
		while (1 + src_len--)
			*dst++ = *src++;
	}
	else if (dstsize > 0)
	{
		while (--dstsize)
			*dst++ = *src++;
		*dst = '\0';
	}
	return (ans);
}
