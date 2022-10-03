/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarai </var/mail/yarai>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 21:23:01 by yarai             #+#    #+#             */
/*   Updated: 2022/10/03 18:02:22 by yarai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char	*format, ...);
size_t	id_count(const char	*format);
int		print_all(va_list	ap, const char	*format);

int	print_all(va_list	ap, const char	*format)
{
	size_t	i;
	int		print_len;
	bool	per_flag;

	i = 0;
	print_len = 0;
	per_flag = true;
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '\0' && per_flag)
		{
			print_len += ft_identifier(ap, format[i + 1]);
			i++;
			per_flag = false;
			continue ;
		}
		else if (format[i] != '%' && per_flag)
		{
			ft_putchar(format[i]);
			print_len++;
		}
		per_flag = true;
		i++;
	}
	return (print_len);
}

size_t	id_count(const char	*format)
{
	size_t	cnt;
	size_t	i;
	bool	percent_flag;

	cnt = 0;
	i = 0;
	percent_flag = true;
	while (format[i])
	{
		if (format[i] == '%' && percent_flag)
			percent_flag = false;
		else if (!percent_flag)
		{
			cnt++;
			percent_flag = true;
		}
		i++;
	}
	return (cnt);
}

int	ft_printf(const	char	*format, ...)
{
	va_list	ap;
	int		print_len;
	size_t	id_sum;

	if (!format)
		return (0);
	id_sum = id_count(format);
	if (id_sum == 0)
		return (ft_putstr(format));
	va_start(ap, format);
	print_len = print_all(ap, format);
	va_end(ap);
	return (print_len);
}
