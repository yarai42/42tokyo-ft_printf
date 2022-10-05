/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarai </var/mail/yarai>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 14:33:17 by yarai             #+#    #+#             */
/*   Updated: 2022/10/02 13:10:30 by yarai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcat(char	*dst, const	char	*src, size_t	dstsize);
static size_t	ft_str_len(char	*s);

static size_t	ft_str_len(char	*s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}

size_t	ft_strlcat(char	*dst, const	char	*src, size_t	dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	j;

	dst_len = ft_str_len(dst);
	src_len = ft_str_len((char *)src);
	i = dst_len;
	j = 0;
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	while (dstsize - dst_len - 1 > 0 && src[j] != '\0')
	{
		dst[i++] = src[j++];
		dstsize--;
	}
	dst[i] = '\0';
	return (dst_len + src_len);
}
