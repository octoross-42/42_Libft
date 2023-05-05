/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: octoross <octoross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 22:31:55 by octoross          #+#    #+#             */
/*   Updated: 2023/05/05 20:26:32 by octoross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memrchr(const void *s, int c, size_t n)
{
	unsigned char	*memory;
	size_t			i;

	if (!s)
		return (0);
	memory = (unsigned char *)s;
	i = n - 1;
	while (i >= 0 && memory[i] != c)
		i --;
	if (i >= 0)
		return ((void *)&(s[i]));
	return (0);
}
