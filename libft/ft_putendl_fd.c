/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarai </var/mail/yarai>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 10:15:16 by yarai             #+#    #+#             */
/*   Updated: 2022/10/02 13:16:29 by yarai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char	*s, int fd);

void	ft_putendl_fd(char	*s, int fd)
{
	size_t	i;

	i = 0;
	if (fd < 0 || !s)
		return ;
	while (s[i])
		write(fd, &s[i++], 1);
	write(fd, "\n", 1);
}
