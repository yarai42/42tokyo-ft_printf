/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarai </var/mail/yarai>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 18:57:19 by yarai             #+#    #+#             */
/*   Updated: 2022/10/02 19:55:13 by yarai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "ft_printf.h"
# include <unistd.h>
# include <string.h>
# include <stddef.h>
# include <stdlib.h>
# include <stdbool.h>
# include <limits.h>
# include <stdarg.h>

int		ft_printf(const char	*format, ...);
size_t	id_count(const char	*format);
int		print_all(va_list	ap, const char	*format);
int		ft_identifier(va_list	ap, char c);
char	*ft_hexastr(size_t	n);
char	*ft_hexa_culc(size_t	n, char	*hexa_table);
int		ft_putstr(const char	*str);
int		ft_putchar(char c);
int		ft_putaddress(void	*p);
int		ft_putnbr(int nbr);
int		ft_putnbr_unsigned(unsigned int nbr);
int		ft_puthexa_low(unsigned int nbr);
int		ft_puthexa_upper(unsigned int nbr);
void	ft_putdecimal(int n);
void	ft_putdecimal_unsigned(unsigned int n);
char	*ft_uitoa(unsigned int n);

#endif
