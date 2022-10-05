/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarai </var/mail/yarai>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 20:41:52 by yarai             #+#    #+#             */
/*   Updated: 2022/05/28 22:54:47 by yarai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_calloc(size_t	number, size_t	size);
static void	ft_b_zero(void	*s, size_t	n);

static void	ft_b_zero(void	*s, size_t	n)
{
	while (n--)
		*(unsigned char *)s++ = '\0';
}

void	*ft_calloc(size_t	number, size_t	size)
{
	void	*ans;

	if (number == 0 || size == 0)
	{
		number = 1;
		size = 1;
	}
	if (number * size / size != number)
		return (NULL);
	ans = malloc(number * size);
	if (ans == NULL)
		return (NULL);
	ft_b_zero(ans, number * size);
	return (ans);
}
