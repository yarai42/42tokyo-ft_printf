/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarai </var/mail/yarai>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 11:11:09 by yarai             #+#    #+#             */
/*   Updated: 2022/10/02 13:11:33 by yarai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const	*s, char (*f)(unsigned	int, char));

char	*ft_strmapi(char const	*s, char (*f)(unsigned	int, char))
{
	size_t			slen;
	unsigned int	i;
	char			*ans;

	if (!s || !f)
		return (NULL);
	slen = 0;
	i = 0;
	while (s[slen])
		slen++;
	ans = (char *)malloc(sizeof(char) * (slen + 1));
	if (ans == NULL)
		return (NULL);
	while (s[i])
	{
		ans[i] = f(i, s[i]);
		i++;
	}
	ans[i] = '\0';
	return (ans);
}
