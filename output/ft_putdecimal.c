/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarai </var/mail/yarai>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 10:18:43 by yarai             #+#    #+#             */
/*   Updated: 2022/10/02 19:55:43 by yarai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_putdecimal(int n);

void	ft_putdecimal(int n)
{
	if (n < 0 && n != INT_MIN)
	{
		write(1, "-", 1);
		ft_putdecimal(n * -1);
	}
	else if (n >= 10)
	{
		ft_putdecimal(n / 10);
		ft_putdecimal(n % 10);
	}
	else if (n >= 0 && n < 10)
		ft_putchar(n + '0');
	else
		write(1, "-2147483648", 11);
}
