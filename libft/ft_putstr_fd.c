/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarai </var/mail/yarai>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 10:12:39 by yarai             #+#    #+#             */
/*   Updated: 2022/10/02 13:22:28 by yarai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char	*s, int fd);

void	ft_putstr_fd(char	*s, int fd)
{
	size_t	i;

	i = 0;
	if (fd < 0 || !s)
		return ;
	while (s[i])
		write(fd, &s[i++], 1);
}
