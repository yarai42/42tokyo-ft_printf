/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarai </var/mail/yarai>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 10:18:43 by yarai             #+#    #+#             */
/*   Updated: 2022/10/02 19:53:31 by yarai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_putdecimal_unsigned(unsigned int n);

void	ft_putdecimal_unsigned(unsigned int n)
{
	if (n >= 10)
	{
		ft_putdecimal_unsigned(n / 10);
		ft_putdecimal_unsigned(n % 10);
	}
	else if (n >= 0 && n < 10)
		ft_putchar(n + '0');
}
