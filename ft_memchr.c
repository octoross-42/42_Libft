/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: octoross <octoross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 22:27:30 by octoross          #+#    #+#             */
/*   Updated: 2023/05/09 14:49:59 by octoross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*memory;
	size_t	i;

	if (!s)
		return (0);
	memory = (unsigned char *)s;
	i = 0;
	while (i < n && memory[i] != (unsigned char)c)
		i ++;
	if (i < n)
		return ((void *)&(s[i]));
	return (0);
}
