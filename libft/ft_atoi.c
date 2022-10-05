/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarai </var/mail/yarai>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 06:56:23 by yarai             #+#    #+#             */
/*   Updated: 2022/10/02 13:09:24 by yarai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(const char *str);
static bool	ft_isspace(char c);
static int	ft_issign(char c);

static bool	ft_isspace(char c)
{
	if (('\t' <= c && c <= '\r') || c == ' ')
		return (true);
	return (false);
}

static int	ft_issign(char c)
{
	if (c == '-')
		return (-1);
	else if (c == '+')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	size_t	i;
	int		sign;
	int		ans;

	i = 0;
	sign = 1;
	ans = 0;
	while (ft_isspace(str[i]))
		i++;
	if (ft_issign(str[i]) != 0)
	{
		sign = ft_issign(str[i]);
		i++;
	}
	while ((0 <= str[i] - '0') && (str[i] - '0' <= 9))
	{
		ans = 10 * ans - (str[i] - '0');
		i++;
	}
	return (ans * -sign);
}
