/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convertTohexa.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarai </var/mail/yarai>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 17:57:17 by yarai             #+#    #+#             */
/*   Updated: 2022/10/03 17:29:43 by yarai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_hexastr(size_t n);
char	*ft_hexa_culc(size_t n, char	*hexa_str, size_t	i);

char	*ft_hexa_culc(size_t n, char	*hexa_str, size_t	i)
{
	size_t	tmp;

	hexa_str[i--] = '\0';
	while (n >= 0)
	{
		tmp = n % 16;
		n /= 16;
		if (tmp >= 10)
			hexa_str[i] = 'a' + (tmp - 10);
		else
			hexa_str[i] = '0' + tmp;
		if (i == 0)
			break ;
		i--;
	}
	return (hexa_str);
}

char	*ft_hexastr(size_t n)
{
	char	*hexa_str;
	size_t	nn;
	size_t	i;

	nn = n;
	i = 0;
	if (nn == 0)
		i = 1;
	while (nn > 0)
	{
		nn /= 16;
		i++;
	}
	hexa_str = (char *)malloc(sizeof(char) * (i + 1));
	if (hexa_str == NULL)
		return (NULL);
	return (ft_hexa_culc(n, &hexa_str[0], i));
}
