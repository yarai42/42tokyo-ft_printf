/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarai </var/mail/yarai>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 22:21:58 by yarai             #+#    #+#             */
/*   Updated: 2022/10/02 13:12:03 by yarai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char	const	*s, unsigned int start, size_t	len);

char	*ft_substr(char const	*s, unsigned int start, size_t	len)
{
	char	*str;
	size_t	s_len;
	size_t	i;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	i = 0;
	if (len == 0 || start >= s_len)
	{
		str = (char *)malloc(sizeof(char) * 1);
		if (str == NULL)
			return (NULL);
		str[i] = '\0';
		return (str);
	}
	if (len > s_len - (size_t)start)
		len = s_len - (size_t)start;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	while (s[start] != '\0' && len--)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}
