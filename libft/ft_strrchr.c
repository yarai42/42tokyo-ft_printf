/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarai </var/mail/yarai>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 20:08:13 by yarai             #+#    #+#             */
/*   Updated: 2022/10/02 13:14:25 by yarai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const	char	*s, int c);

char	*ft_strrchr(const	char	*s, int c)
{
	long	s_len;

	s_len = 0;
	while (s[s_len])
		s_len++;
	while (1)
	{
		if (s[s_len] == (char)c)
			return ((char *)(s + s_len));
		if (s_len == 0)
			break ;
		s_len--;
	}
	return (NULL);
}
