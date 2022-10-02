/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarai </var/mail/yarai>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 21:23:01 by yarai             #+#    #+#             */
/*   Updated: 2022/10/02 15:42:37 by yarai            ###   ########.fr       */
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

	i = 0;
	print_len = 0;
	while (format[i + 1] != '\0')
	{
		if (format[i] == '%')
		{
			print_len += ft_identifier(ap, format[i + 1]);
			i++;
			continue ;
		}
		i++;
		print_len++;
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
