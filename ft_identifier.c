/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_identifier.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarai </var/mail/yarai>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 17:10:29 by yarai             #+#    #+#             */
/*   Updated: 2022/10/02 19:32:44 by yarai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_identifier(va_list	ap, char c);

int	ft_identifier(va_list	ap, char c)
{
	if (c == 'c')
		return (ft_putchar(va_arg(ap, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(ap, char *)));
	else if (c == 'p')
		return (ft_putaddress(va_arg(ap, void *)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(ap, int)));
	else if (c == 'u')
		return (ft_putnbr_unsigned(va_arg(ap, unsigned int)));
	else if (c == 'x')
		return (ft_puthexa_low(va_arg(ap, unsigned int)));
	else if (c == 'X')
		return (ft_puthexa_upper(va_arg(ap, unsigned int)));
	else if (c == '%')
		return (ft_putchar('%'));
	else
		return (0);
}
