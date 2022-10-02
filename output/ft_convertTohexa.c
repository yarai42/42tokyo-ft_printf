/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convertTohexa.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarai </var/mail/yarai>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 17:57:17 by yarai             #+#    #+#             */
/*   Updated: 2022/10/02 19:50:10 by yarai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_hexastr(size_t n);
char	*ft_hexa_culc(size_t n, char	*hexa_table);

char	*ft_hexa_culc(size_t n, char	*hexa_table)
{
	char	*hexa_str;
	size_t	nn;
	size_t	i;
	size_t	j;

	nn = n;
	i = 0;
	while (nn > 0)
	{
		nn /= 16;
		i++;
	}
	hexa_str = (char *)malloc(sizeof(char) * (i + 1));
	if (hexa_str == NULL)
		return (NULL);
	hexa_str[i--] = '\0';
	while (n > 0)
	{
		j = n % 16;
		n /= 16;
		hexa_str[i--] = hexa_table[j];
	}
	return (hexa_str);
}

char	*ft_hexastr(size_t n)
{
	char	*hexa_str;
	char	*hexa_table;

	hexa_table = (char *)malloc(sizeof(char) * 16);
	if (hexa_table == NULL)
		return (NULL);
	hexa_table = "0123456789ABCDEF";
	hexa_str = ft_hexa_culc(n, hexa_table);
	free(hexa_table);
	return (hexa_str);
}
