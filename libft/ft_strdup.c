/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarai </var/mail/yarai>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 21:49:19 by yarai             #+#    #+#             */
/*   Updated: 2022/04/22 15:52:54 by yarai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char	*s1);

char	*ft_strdup(const char	*s1)
{
	char	*ans;
	size_t	s1_len;
	size_t	i;

	i = 0;
	s1_len = 0;
	while (s1[s1_len])
		s1_len++;
	ans = (char *)malloc(sizeof(char) * (s1_len + 1));
	if (ans == NULL)
		return (NULL);
	while (s1[i])
	{
		ans[i] = s1[i];
		i++;
	}
	ans[i] = '\0';
	return (ans);
}
