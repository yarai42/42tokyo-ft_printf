/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarai </var/mail/yarai>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 08:35:58 by yarai             #+#    #+#             */
/*   Updated: 2022/07/18 10:32:42 by yarai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strjoin(char const	*s1, char const	*s2);
static size_t	ft_len(char	const	*str);

static size_t	ft_len(char	const	*str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const	*s1, char const	*s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	i;
	char	*ans;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_len(s1);
	s2_len = ft_len(s2);
	i = 0;
	ans = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (ans == NULL)
		return (NULL);
	while (*s1)
		ans[i++] = *s1++;
	while (*s2)
		ans[i++] = *s2++;
	ans[i] = '\0';
	return (ans);
}
