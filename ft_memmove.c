/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: octoross <octoross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 21:30:55 by octoross          #+#    #+#             */
/*   Updated: 2023/05/03 21:30:55 by octoross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int		*from;
	int		*to;
	size_t	i;

	if (!dest || !src)
		return (NULL);
	from = src;
	to = dest;
	if (n == 0 || dest == src)
		return (dest);
	if (0 < to - from && to - from < (int) n)
	{
		i = n - 1;
		while (i-- >= 0)
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
