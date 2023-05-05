/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: octoross <octoross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 22:34:18 by octoross          #+#    #+#             */
/*   Updated: 2023/05/05 19:46:18 by octoross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*mem1;
	unsigned char	*mem2;

	if (!s1 || !s2)
		return (0);
	i = 0;
	mem1 = (unsigned char *) s1;
	mem2 = (unsigned char *) s2;
	while (mem1[i] && i < n && mem1[i] == mem2[i])
		i ++;
	if (i == n)
		return (0);
	return (mem1[i] - mem2[i]);
}
