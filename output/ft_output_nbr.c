/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_output_nbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarai </var/mail/yarai>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 23:43:35 by yarai             #+#    #+#             */
/*   Updated: 2022/10/03 18:38:24 by yarai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include "../libft/libft.h"

int	ft_putnbr(int nbr);
int	ft_putnbr_unsigned(unsigned int nbr);
int	ft_puthexa_low(unsigned int nbr);
int	ft_puthexa_upper(unsigned int nbr);

int	ft_putnbr(int nbr)
{
	int		len;
	char	*nbr_str;

	nbr_str = ft_itoa(nbr);
	len = ft_strlen(nbr_str);
	ft_putstr(nbr_str);
	free(nbr_str);
	return (len);
}

int	ft_putnbr_unsigned(unsigned int nbr)
{
	int		len;
	char	*un_str;

	un_str = ft_uitoa(nbr);
	len = ft_strlen(un_str);
	ft_putstr(un_str);
	free(un_str);
	return (len);
}

int	ft_puthexa_low(unsigned int nbr)
{
	int		len;
	int		i;
	char	*s;

	s = ft_hexastr(nbr);
	if (!s)
		return (0);
	i = 0;
//	while (s[i])
//		ft_tolower(s[i++]);
	ft_putstr(s);
	len = ft_strlen(s);
	free(s);
	return (len);
}

int	ft_puthexa_upper(unsigned int nbr)
{
	int		len;
	int		i;
	char	*s;

	s = ft_hexastr(nbr);
	if (!s)
		return (0);
	i = 0;
	while (s[i])
	{
		s[i] = ft_toupper(s[i]);
		i++;
	}
	ft_putstr(s);
	len = ft_strlen(s);
	free(s);
	return (len);
}
