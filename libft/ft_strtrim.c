/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarai </var/mail/yarai>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 09:39:46 by yarai             #+#    #+#             */
/*   Updated: 2022/07/27 11:01:35 by yarai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strtrim(char const	*s1, char const	*set);
static size_t	ft_slen(char const	*str);
static size_t	ft_scmp(char const	s1, char const	*s2);

static size_t	ft_slen(char const	*str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

static size_t	ft_scmp(char const	s1, char const	*s2)
{
	size_t	i;

	i = 0;
	while (s2[i])
	{
		if (s1 == s2[i])
			return (1);
		i++;
	}
	if (s1 == s2[i])
		return (1);
	return (0);
}

char	*ft_strtrim(char const	*s1, char const	*set)
{
	char	*ans;
	int		start;
	int		end;
	size_t	i;

	i = 0;
	start = 0;
	end = (int)ft_slen(s1) - 1;
	while (end - start >= 0)
	{
		if (ft_scmp(s1[start], set) && start != end)
			start++;
		else if (ft_scmp(s1[end], set))
			end--;
		else
			break ;
	}
	ans = (char *)malloc(sizeof(char) * (end - start + 2));
	if (ans == NULL)
		return (NULL);
	while (start <= end)
		ans[i++] = s1[start++];
	ans[i] = '\0';
	return (ans);
}
