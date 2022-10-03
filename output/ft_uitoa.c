/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarai </var/mail/yarai>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 17:32:19 by yarai             #+#    #+#             */
/*   Updated: 2022/10/03 18:25:30 by yarai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../ft_printf.h"

char				*ft_uitoa(unsigned int n);
static unsigned	int	ft_nlen(unsigned int n);
static char			*ft_culc(char	*ans, unsigned int n, unsigned int n_len);

static unsigned	int	ft_nlen(unsigned int n)
{
	unsigned int	len;
	unsigned int	nn;

	len = 0;
	nn = n;
	if (nn == 0)
		len = 1;
	while (nn > 0)
	{
		len++;
		nn /= 10;
	}
	return (len);
}

static char	*ft_culc(char	*ans, unsigned int n, unsigned int n_len)
{
	long long	nn_len;

	nn_len = n_len;
	ans[nn_len--] = '\0';
	while (nn_len >= 0)
	{
		ans[nn_len] = (n % 10 + '0');
		n /= 10;
		nn_len--;
	}
	return (ans);
}

char	*ft_uitoa(unsigned int n)
{
	char			*ans;
	unsigned int	n_len;

	n_len = ft_nlen(n);
	ans = (char *)malloc(sizeof(char) * (n_len + 1));
	if (ans == NULL)
		return (NULL);
	return (ft_culc(ans, n, n_len));
}
