/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: octoross <octoross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 21:29:37 by octoross          #+#    #+#             */
/*   Updated: 2023/05/03 21:29:37 by octoross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*from;
	unsigned char	*to;

	if (!dest || !src)
		return (NULL);
	from = src;
	to = dest;
	i = 0;
	while (i < n)
		to[i] = from[i++];
	return (dest);
}
