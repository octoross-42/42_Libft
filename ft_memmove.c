/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: octoross <octoross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 21:30:55 by octoross          #+#    #+#             */
/*   Updated: 2023/05/05 20:25:53 by octoross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int	const	*from;
	int			*to;
	size_t		i;

	if (!dest || !src)
		return (NULL);
	from = src;
	to = dest;
	if (n == 0 || dest == src)
		return (dest);
	if (0 < to - from && to - from < (int) n)
	{
		i = n;
		while (--i >= 0)
			to[i] = from[i];
	}
	else
	{
		i = 0;
		while (i++ < n)
			to[i] = from[i];
	}
	return (dest);
}
