/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putout.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarai </var/mail/yarai>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 16:53:46 by yarai             #+#    #+#             */
/*   Updated: 2022/10/03 18:12:28 by yarai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include "../libft/libft.h"

int	ft_putstr(const char	*str);
int	ft_putchar(char c);
int	ft_putaddress(void	*p);

int	ft_putstr(const	char	*str)
{
	int	len;

	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	len = ft_strlen(str);
	write(1, str, len);
	return (len);
}

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putaddress(void	*p)
{
	int		len;
	char	*hexastr;
	size_t	p_num;
	char	*p_str;

	p_num = (size_t)p;
	hexastr = ft_hexastr(p_num);
	p_str = ft_strjoin("0x", hexastr);
	if (p_str == NULL)
		return (0);
	len = ft_putstr(p_str);
	free(p_str);
	free(hexastr);
	return (len);
}
