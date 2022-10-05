/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarai </var/mail/yarai>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 17:32:19 by yarai             #+#    #+#             */
/*   Updated: 2022/10/02 13:04:59 by yarai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char		*ft_itoa(int n);
static int	ft_nlen(int n);
static char	*ft_culc(char	*ans, int n, int n_len);

static int	ft_nlen(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	else if (n == INT_MIN)
		return (11);
	else if (n < 0)
	{
		len++;
		n *= -1;
	}
	while (n > 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static char	*ft_culc(char	*ans, int n, int n_len)
{
	int	sign;

	sign = 1;
	if (n < 0)
		sign = -1;
	ans[n_len--] = '\0';
	while (n_len >= 0)
	{
		if (sign == -1 && !n_len)
		{
			ans[n_len] = '-';
			break ;
		}
		ans[n_len] = (n % 10 * sign + '0');
		n /= 10;
		n_len--;
	}
	return (ans);
}

char	*ft_itoa(int n)
{
	char	*ans;
	int		n_len;

	n_len = ft_nlen(n);
	ans = (char *)malloc(sizeof(char) * (n_len + 1));
	if (ans == NULL)
		return (NULL);
	return (ft_culc(ans, n, n_len));
}
